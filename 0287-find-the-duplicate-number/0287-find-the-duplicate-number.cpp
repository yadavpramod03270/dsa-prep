class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i =0; i<nums.size(); i++){
            int ind=abs(nums[i]);// taking value from the array 
            if(nums[ind]<0){ // checking if it is negetive, and if yes ....it means we have intialy store it and marked is as negetive
                return ind;
            }
            nums[ind]=-nums[ind]; // if value not -ive , mark it 
        }
        return -1;
    }
};