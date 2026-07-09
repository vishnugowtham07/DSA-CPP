class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int m = 0;
    int n = nums.size();
    int c=0;
    for(int i = 0; i < n ; i++ ){
        if(nums[i] == 1)
            c++;
        else
            c = 0;
        if(c >= m )
            m = c;
    }
    return m;
    }
};
