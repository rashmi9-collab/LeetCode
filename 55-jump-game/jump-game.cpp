class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int tmp = 1;

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] >= tmp)
                tmp = 1;
            else
                tmp++;
        }

        return tmp == 1;
    }
};