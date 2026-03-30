class Solution {
public:
    int maxDepth(string s) {
        int mx=0;
        int count=0;
        for(auto x: s){
            if(x=='('){
                count++;
                mx=max(mx,count);
            }else if(x==')'){
                count--;
            }
        }
        return mx;
        
    }
};