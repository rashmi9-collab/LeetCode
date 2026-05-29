
class Solution {
public:
   bool cansplit(vector<int>& weights,int days,int mid){
    int count=1;
    int sum=0;
    for(int num:weights){
     if(sum+num>mid){
        count++;
        sum=num;
     }
     else{
        sum+=num;

     }
    }
 return count<=days;
   }

      int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());

        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<high){
            int mid=low+(high-low)/2;
         if(cansplit(weights,days,mid)){
            high=mid;
         }
         else{
            low=mid+1;
         }
            
        }
        return low;
    }
};
  