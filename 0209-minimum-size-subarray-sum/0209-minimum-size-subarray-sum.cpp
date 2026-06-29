class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int count=0;
        int res=INT_MAX;
        int sum=0;
        while(j<nums.size()){
            sum+=nums[j];
            while(sum>=target){
                res=min(res,j-i+1);
                  sum -= nums[i];
                ++i;
            }
            j++;
        }
        if(res == INT_MAX)
            return 0; 
        return res;
        
    }
};