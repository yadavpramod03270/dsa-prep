class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
     priority_queue<pair<int,int>> pq; // max heap
    
    for(int i = 0; i < mat.size(); i++){
        int count = 0;
        
        for(int j = 0; j < mat[0].size(); j++){
            if(mat[i][j] == 1) count++;
            else break;
        }
        
        pq.push({count, i});
        
        if(pq.size() > k){
            pq.pop();
        }
    }     
       

      vector<int> ans(k);
    
    for(int i = k-1; i >= 0; i--){
        ans[i] = pq.top().second;
        pq.pop();
    }
    
    return ans;
}
};