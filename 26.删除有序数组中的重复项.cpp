/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int num = 0, n = nums.size();
        if (n == 0)
            return 0;
        for (int i = 1; i < n; i++)
        {
            if (nums[num] != nums[i])
            {
                num++;
                nums[num] = nums[i];
            }
        }
        return num + 1;
    }
};
// @lc code=end
