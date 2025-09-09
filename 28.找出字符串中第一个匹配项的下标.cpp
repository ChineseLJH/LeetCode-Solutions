/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 找出字符串中第一个匹配项的下标
 */

// @lc code=start
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        for (int i = 0; i < haystack.size(); i++)
        {
            if (haystack[i] == needle[0])
            {
                int j;
                for (j = 1; j < needle.size(); j++)
                {
                    if (haystack[i + j] != needle[j])
                        break;
                }
                if (j == needle.size())
                    return i;
            }
        }
        return -1;
    }
};
// @lc code=end
