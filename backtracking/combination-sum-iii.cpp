class Solution {
public:
void prints(int last,int k,int sum, vector<int> &ds,vector<vector<int>> &ans){
    if(sum==0 && ds.size()==k){
        ans.push_back(ds);
        return;
    }
    if(sum<=0 || ds.size()>k) return;

    for(int i=last;i<9;i++){
        if(i<=sum){
            ds.push_back(i);
            prints(i+1,k,sum-i,ds,ans);
            ds.pop_back();
        }
        else{
            break;
        }
    }

}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> ds;
        vector<vector<int>> ans;
        prints(1,k,n,ds,ans);
        return ans;
    }
};