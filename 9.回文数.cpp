/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x <= 0)
        {
            if (x == 0)
                return true;
            else
                return false;
        }
        else
        {
            int a[50];
            int n = 0;
            int temp = x;
            while (temp > 0)
            {
                n++;
                a[n] = temp % 10;
                temp /= 10;
            }
            if (n % 2 == 0)
            {
                for (int i = 1; i <= n / 2; i++)
                {
                    if (a[i] != a[n - i + 1])
                        return false;
                }
            }
            else
            {
                for (int i = 1; i <= (n - 1) / 2; i++)
                {
                    if (a[i] != a[n - i + 1])
                        return false;
                }
            }
            return true;
        }
    }
};
// @lc code=end
