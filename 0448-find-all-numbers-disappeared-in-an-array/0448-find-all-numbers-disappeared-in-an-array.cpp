class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        for(int i=0; i<n; i++){
            int index=abs(nums[i])-1;
            if(nums[index]>0){
                nums[index]=-nums[index];
            }
        }
for(int i=0; i<n; i++){
    if(nums[i]>0){
        v.push_back(i+1);
    }
}
    return v;

    }
};