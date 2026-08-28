class Solution {
public:
    bool  caneat(const vector<int>& arr, int h, int k){
         long long hours = 0;
        for(auto pile: arr){
        hours+=pile/k;
         if (pile % k != 0) hours++;
          if (hours > h) return false;
        }
         return hours <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
       int lft=1;
       int rgt= *max_element(piles.begin(), piles.end());
       int ans=rgt;
        while(lft<=rgt){
            int mid=lft+(rgt-lft)/2;
            if(caneat(piles,h,mid)){
            ans=mid;
            rgt=mid-1;
        }else{
            lft=mid+1;
        }}
return ans;
        }
    
};