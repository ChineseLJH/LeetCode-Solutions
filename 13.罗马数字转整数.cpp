/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution
{

private:
    // 辅助函数，根据字符返回值。这能让主逻辑更清晰。
    int getValue(char ch) {
        switch (ch) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

public:
    int romanToInt(string s)
    {
        int sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (i + 1 < s.length() && getValue(s[i]) < getValue(s[i+1]))
            {
                sum -= getValue(s[i]);
            }
            else
            {
                sum += getValue(s[i]);
            }
        }
        return sum;
    }
};
// @lc code=end
