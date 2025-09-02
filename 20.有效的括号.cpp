/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        if(s.size()%2!=0) return false;
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{') st.push(s[i]);
            else
            {
                if(st.empty()) return false;
                if(s[i]==')')
                {
                    if(st.top()=='(') st.pop();
                    else return false;
                }
                else if(s[i]==']')
                {
                    if(st.top()=='[') st.pop();
                    else return false;
                }
                else if(s[i]=='}')
                {
                    if(st.top()=='{') st.pop();
                    else return false;
                }

            }
        }
        if(!st.empty()) return false;
        return true;
    }
};
// @lc code=end
