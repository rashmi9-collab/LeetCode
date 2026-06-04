class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int tmp = 1;
for(int i=n-1; i>=0;i--)
{
if( nums[i] >= tmp) tmp=1;
else tmp++;
}
if(tmp==1) 
 return true;

    }
    return false;
};