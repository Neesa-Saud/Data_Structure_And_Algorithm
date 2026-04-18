class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int i=0;i<strs[0].length();i++)
        {
            for(int j=0;j<strs.size()-1;j++)
            {
                if(strs[j][i]!=strs[j+1][i]) return ans;
            }
             ans = ans + strs[0][i];
        }
  return ans ;
    }
};

// strs[0][i] with strs[1][i]
// strs[1][i] with strs[2][i]
// strs[2][i] with strs[3][i]
