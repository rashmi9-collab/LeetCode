class Solution {
public:
   bool cansplit(vector<int>& nums,int k,int mid){
    int count=1;
    int sum=0;
    for(int num:nums){
     if(sum+num>mid){
        count++;
        sum=num;
     }
     else{
        sum+=num;

     }
    }
 return count<=k;
   }

    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());

        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<high){
            int mid=low+(high-low)/2;
         if(cansplit(nums,k,mid)){
            high=mid;
         }
         else{
            low=mid+1;
         }
            
        }
        return low;
    }
};