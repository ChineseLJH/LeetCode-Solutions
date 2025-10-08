/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        if (nums1.size() > nums2.size())
        {
            return findMedianSortedArrays(nums2, nums1); // 确保 nums1 是较短的数组
        }

        int m = nums1.size();
        int n = nums2.size();
        int left = 0, right = m;
        int halfLen = (m + n + 1) / 2;

        while (left <= right)
        {
            int i = (left + right) / 2;
            int j = halfLen - i;

            int nums1LeftMax = (i == 0) ? INT_MIN : nums1[i - 1];
            int nums1RightMin = (i == m) ? INT_MAX : nums1[i];
            int nums2LeftMax = (j == 0) ? INT_MIN : nums2[j - 1];
            int nums2RightMin = (j == n) ? INT_MAX : nums2[j];

            if (nums1LeftMax <= nums2RightMin && nums2LeftMax <= nums1RightMin)
            {
                // 找到正确的分割点
                if ((m + n) % 2 == 0)
                {
                    return (max(nums1LeftMax, nums2LeftMax) + min(nums1RightMin, nums2RightMin)) / 2.0;
                }
                else
                {
                    return max(nums1LeftMax, nums2LeftMax);
                }
            }
            else if (nums1LeftMax > nums2RightMin)
            {
                right = i - 1; // i 太大，向左移动
            }
            else
            {
                left = i + 1; // i 太小，向右移动
            }
        }

        return 0.0; // 不会执行到这里
    }
};
// @lc code=end
