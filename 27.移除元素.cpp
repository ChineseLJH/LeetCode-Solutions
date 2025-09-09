/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow = 0; // 慢指针，指向结果数组的末尾
        for (int fast = 0; fast < nums.size(); fast++) { // 快指针，遍历整个数组
            if (nums[fast] != val) { // 如果当前元素不是目标值
                nums[slow] = nums[fast]; // 将元素放到慢指针的位置
                slow++; // 慢指针前进
            }
        }
        return slow; 
    }
};
// @lc code=end

