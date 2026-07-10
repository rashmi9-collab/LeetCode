class Solution {
public:
void prints(int ind,int target,vector<int> &ds,vector<vector<int>> &ans,vector<int>& candidates){
    if(ind==candidates.size()){
        if(target==0){
            ans.push_back(ds);
         
        }
          return;
    }
    if(target<0)
    return; 

    
    ds.push_back(candidates[ind]);
    prints(ind,target-candidates[ind],ds,ans,candidates);
    ds.pop_back();
    
    prints(ind+1,target,ds,ans,candidates);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> ans;
        prints(0,target,ds,ans,candidates);
        return ans;
    }
};