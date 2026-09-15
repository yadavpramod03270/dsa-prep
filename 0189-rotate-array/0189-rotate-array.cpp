class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i=0;
        if (nums.empty()) return;
        k = k % nums.size();  //Handle cases where k >= nums.size()
         if (k == 0) return;  // No rotation needed
        vector<int>v;
        int j=nums.size()-k;
        int kv=nums.size()-k;
        while(j<nums.size()){
        v.push_back(nums[j]);  
        j++;  
        }
        while(i<kv){
            v.push_back(nums[i]);
            i++;
        }
        nums=v;
    }
};