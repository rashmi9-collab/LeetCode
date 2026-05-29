class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int high=0;
        for(int i=0;i<n;i++){
            high=max(high,piles[i]);
        }
        while(low<high){
            int mid=low+(high-low)/2;
            long long totalhr=0;
        for(int i=0;i<n;i++){
            totalhr+=(piles[i]+mid-1)/mid;
        }
        if(totalhr>h){
        low=mid+1;
        }
        else{
            high=mid;
        }
        }
      return low;
    }
};