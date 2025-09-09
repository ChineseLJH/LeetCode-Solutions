/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(); // 哑节点，简化操作
        ListNode* list = dummy;
        while(l1 != nullptr || l2 != nullptr)
        {
            int a = (l1 != nullptr) ? l1->val : 0;
            int b = (l2 != nullptr) ? l2->val : 0;

            list->val += a + b;

            bool hasMore = (l1 && l1->next) || (l2 && l2->next);

            if(list->val >= 10)
            {
                list->val -= 10;
                list->next = new ListNode(1);
            }
            else if(hasMore)
            {
                list->next = new ListNode();
            }

            if(l1 != nullptr) l1 = l1->next;
            if(l2 != nullptr) l2 = l2->next;

            if(list->next != nullptr) list = list->next;
        }
        return dummy;

    }
};
// @lc code=end

