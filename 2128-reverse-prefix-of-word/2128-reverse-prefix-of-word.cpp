class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char>st;
        string p;
        int i = 0;
    
     
    while (i < word.size()) {
        st.push(word[i]);
        if (word[i] == ch) {
            break;
        }
        i++;
    }
      if (word[i] != ch) {
        return word;
    }
        while(!st.empty()){
            p+=st.top();
            st.pop();
        }
        for (int j = i + 1; j < word.size(); j++) {
        p += word[j];
    }
        return p;
    }
};