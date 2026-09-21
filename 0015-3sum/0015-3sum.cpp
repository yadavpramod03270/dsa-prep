class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> st;
        vector<vector<int>> res;
        for(int i=0; i<n-2; i++){
            int low = i+1, high = n-1;
     while(low<high){
        if(nums[i]+nums[low]+nums[high]<0){
            low++;
        }
        else  if(nums[i]+nums[low]+nums[high]>0){
            high--;
        }
        else{
            st.insert({nums[i],nums[low],nums[high]});
            low++;
            high--;
        }
     }}
     for(auto& x: st){
        res.push_back(x);
     }
     return res;
    }
};