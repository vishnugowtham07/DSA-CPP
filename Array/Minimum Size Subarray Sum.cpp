class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len = 0;
        int i = 0, j = 0;
        int min_len = INT_MAX;
        int n = nums.size();
        int sum = 0;
        while(j < n){
            sum += nums[j];
            if(sum  < target)
            {
                j++;
            }
            else if(sum >= target)
            {
                while(sum >= target){
                    len = j - i +1;
                    min_len = min(len , min_len);
                    sum -= nums[i];
                    i++;
                }
                j++;
            }
        }
        if(min_len == INT_MAX)
            return 0;
        return min_len;
    }
};
