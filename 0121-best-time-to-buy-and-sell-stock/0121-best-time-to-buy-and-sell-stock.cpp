class Solution {
public:
    int maxProfit(vector<int>& nums) {
       int min_price=INT_MAX;
       int profit=0;
       for(int i=0; i<nums.size(); i++){
        if(nums[i]<min_price){
            min_price=nums[i];
        }
        else if(nums[i]-min_price>profit){
            profit=nums[i]-min_price;
        }
       }
       return profit;
    }
};