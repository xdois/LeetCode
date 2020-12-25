//LeetCode 13 : Roman to Integer

class Solution {
public:
    int roman(char c){
        switch(c){
            case 'I':
                return 1;
                break;
            case 'V':
                return 5;
                break;
            case 'X':
                return 10;
                break;
            case 'L':
                return 50;
                break;
            case 'C':
                return 100;
                break;
            case 'D':
                return 500;
                break;
            case 'M':
                return 1000;
                break;
            default:
                return 0;
                break;
        }
    }
    
    int romanToInt(string s) {
        int ans = roman(s[s.size() - 1]);
        for(int i = 0; i < s.size() - 1; i++){
            if(roman(s[i]) < roman(s[i+1])){
                ans -= roman(s[i]);
            }
            else{
                ans += roman(s[i]);
            }
        }
        return ans;
    }
};