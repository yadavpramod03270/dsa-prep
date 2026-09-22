class Solution {
public:
    // vector<vector<int>> merge(vector<vector<int>>& nums) {
       
        // vector<vector<int>>res;
        //  sort(nums.begin(),
        //      nums.end(),
        //      [](const vector<int>& a, const vector<int>& b) {
        //         return a[0] < b[0];
        //      });
        //      if(nums.size()<=1) return nums;
        // for(int i=1; i<nums.size(); i++){
        //     int temp1=0;
        //     int temp2=0;
        //     if(nums[i][0]<=nums[i-1][1]){
        //          temp1=nums[i-1][0];
        //          temp2=nums[i][1];
        //     }
        //     else if(nums[i][0]>nums[i-1][1]){
        //         temp1=nums[i][0];
        //          temp2=nums[i][1];
        //     }else{
        //         return nums;
        //     }
        //     res.push_back({temp1,temp2});         

        // }
        // return res;
        vector<vector<int>> merge(vector<vector<int>>& nums) {
    vector<vector<int>> res;
    if (nums.size() <= 1) return nums;

    // Your sorting logic
    sort(nums.begin(), nums.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });

    for (int i = 1; i < nums.size(); i++) {
        // If they overlap
        if (nums[i][0] <= nums[i-1][1]) {
            nums[i][0] = nums[i-1][0];            // Start is always the previous start (since sorted)
            nums[i][1] = max(nums[i-1][1], nums[i][1]); // End must be the largest of both ends
        } 
        // If they do NOT overlap, the previous interval (nums[i-1]) is completely finished
        else {
            res.push_back(nums[i-1]);
        }
    }

    // Crucial step: The very last interval is never followed by anything, 
    // so we must push it into res manually after the loop finishes.
    res.push_back(nums.back());

    return res;
}

 
};