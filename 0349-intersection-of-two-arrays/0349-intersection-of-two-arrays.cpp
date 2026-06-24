class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        unordered_set<int>st;
        for(int i=0; i<nums2.size(); i++){
            if (find(nums1.begin(), nums1.end(), nums2[i]) != nums1.end()){
                st.insert(nums2[i]);
            }
        }
        for(auto &x: st){
            v.push_back(x);
        }
        return v;

    }
};