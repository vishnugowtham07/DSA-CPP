class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int max_len = INT_MIN;
        int zero = 0;
        int i = 0, j = 0;
        int n = nums.size();
        while(j < n){
            if(nums[j] == 0)
                zero++;
            if(zero <= k)
            {
                max_len = max(max_len,(j-i +1));
            }
            else if(zero > k){
                
                while(zero > k){
                    if(nums[i] == 0)
                        zero --;
                        i++;
                }
            }
            max_len = max(max_len , (j - i +1));
            j++;
        }
        return max_len;
    }
};
