class Solution {
public:
    bool checkIfPangram(string s1) {
        set<char>s{s1.begin(), s1.end()};
        if(s.size()==26){
            return true;
        }
        return false;
    }
};