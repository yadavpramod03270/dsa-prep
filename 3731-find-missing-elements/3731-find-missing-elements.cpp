class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>v;
        int low=nums[0];
        int n=nums.size()-1;
        int high=nums[n];
        unordered_set<int>s(nums.begin(), nums.end());
        for(int i=low; i<=high; i++){
            if(s.find(i)==s.end()){
                v.push_back(i);
            }
        }
return v;
    }
};