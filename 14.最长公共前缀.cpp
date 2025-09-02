/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        int count=0;
        char s[200];
        int min=strs[0].size();
        for(int i=1;i<strs.size();i++)
        {
            if(strs[i].size()<min) min=strs[i].size();
        }
        for(int i=0;i<min;i++)
        {
            char c=strs[0][i];
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j][i]!=c) return string(s,count);
            }
            s[count++]=c;
        }
        return string(s,count);
    }
};
// @lc code=end

