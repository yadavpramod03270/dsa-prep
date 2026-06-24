class Solution {
public:
    bool isPalindrome(string s) {
        string p="";
       for(int i = 0; i < s.size(); i++){
        if (isalnum(s[i])) {
            p += tolower(s[i]);
        }
    }
            if(p.size() <= 1) return true;
        int i=0;
        int j=p.size()-1;
        while(i<=j){
            if(p[i] != p[j]){
            return false;
        }
            i++;
            j--;
        }
        return true;;
    }
};