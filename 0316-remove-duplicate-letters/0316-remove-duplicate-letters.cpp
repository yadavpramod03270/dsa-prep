class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int>mp;
        unordered_set<char>instack;
        string p;
        for(auto x: s){
            mp[x]++;
        }
        stack<char>st;
        for(int i=0; i<s.size(); i++){
           mp[s[i]]--;
           if(instack.count(s[i])) continue;

           while (!st.empty() && st.top() > s[i] && mp[st.top()] > 0) {
           instack.erase(st.top());
           st.pop();
            }

           st.push(s[i]);
            instack.insert(s[i]);
            
        }
        while(!st.empty()){
            p+=st.top();
            st.pop();
        }
        reverse(p.begin(), p.end());
        return p;
        
    }
};