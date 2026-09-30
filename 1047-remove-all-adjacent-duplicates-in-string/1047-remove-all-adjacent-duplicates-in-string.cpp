class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(auto& x: s){
            if(st.empty()){
                st.push(x);
            }
            else if(st.top()==x){
                st.pop();
            }
            else{
                st.push(x);
            }
        }
        string res="";
        while(!st.empty()){
        res+=st.top();
        st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};