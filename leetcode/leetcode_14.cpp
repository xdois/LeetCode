// LeetCode 14 : Longest Common Prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        if(strs.size() == 0) return ans;
        for(int i = 0; i < strs[0].size(); i++){
            char temp = strs[0][i];
            
            for(int j = 1; j < strs.size(); j++){
                if(strs[j][i] == temp){
                    
                }
                else{
                    return ans;
                }
            }
            ans += temp;
        }
        return ans;
    }
};