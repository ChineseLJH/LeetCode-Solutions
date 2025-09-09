/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1, mid;
        while (left <= right)
        {
            mid = left + (right - left) / 2; // 等价于(left+right)/2，这样写可以防溢出
            if (target == nums[mid])
                return mid;
            else if (target > nums[mid])
                left = mid + 1;
            else
                right = mid - 1;
        }
        return left;
    }
};
// @lc code=end
