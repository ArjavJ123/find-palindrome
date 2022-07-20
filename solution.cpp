class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }
        else {
            string s = to_string(x);
            int c=0, i =0, j = (s.size()-1);
            while(i<j) {
                if(s[i] != s[j]) {
                    c++;
                    break;
                }
                i++;
                j--;
            }
            if(c) {
                return false;
            }
            else {
                return true;
            }
        }
    }
};
