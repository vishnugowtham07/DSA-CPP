class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max1 = nums[0];
        int n = nums.size();
        for(int i = 0; i < n ; i++){
            int sum =0;
            for(int j = i; j < n ; j++){
                sum += nums[j];
                max1 = max(sum , max1);
            }
        }
        return max1;

    }
};
