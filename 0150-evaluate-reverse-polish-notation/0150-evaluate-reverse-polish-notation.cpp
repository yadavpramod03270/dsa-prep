class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (auto& x : tokens) {
            if (x == "+" || x == "-" || x == "*" || x == "/") {
              
                int val2 = st.top();
                st.pop();
                  int val1 = st.top();
                st.pop();

                if (x == "+") {
                    st.push(val1 + val2);
                }

                if (x == "-") {
                    st.push(val1 - val2);
                }
                if (x == "*") {
                    st.push(val1 * val2);
                }
                if (x == "/") {
                    st.push(val1 / val2);
                }
            } 
            else {
                stringstream ss(x);
                int data;
                ss >> data;
                st.push(data);
            }
        }
        return st.top();
    }
};
