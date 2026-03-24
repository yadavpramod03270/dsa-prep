class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int res=0;
        for(auto x: nums){
            res^=x;
        }
        return res;
    }
};