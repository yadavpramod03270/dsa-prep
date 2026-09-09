class Solution {
public:
    int maxVowels(string s, int k) {
        int res=0;
        int i=0; 
        int j=0;
        int temp=0;
        while(j<=s.size()){
            if(s[j]=='a' || s[j]=='e' ||s[j]=='i' ||s[j]=='o' ||s[j]=='u'){
                temp++;
            }
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                if(temp>res){
                    res=temp;
                     
                }
                if(s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u'){
                     temp--;
                    }
                i++;
                j++;
            }
        }
        return res;
        
    }
};