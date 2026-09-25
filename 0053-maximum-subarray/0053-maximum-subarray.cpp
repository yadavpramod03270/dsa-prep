class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=INT_MIN;
        int prefix=0;
       // if(nums.size()<=1) return 1;
        for(int i=0; i<nums.size(); i++){
            prefix+=nums[i];
            
            res=max(res,prefix);
            if(prefix < 0)
                prefix=0;
        }
        return res;
    }
};