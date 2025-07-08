class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string p;
        for(auto x: s){
            if(st.size()==0 || st.top()!=x){
                st.push(x);
            }else if(st.top()==x){
                st.pop();
            }
        }
        while(!st.empty()){
            p+=st.top();
            st.pop();

        }
        reverse(p.begin(), p.end());
        return p;

    }
};