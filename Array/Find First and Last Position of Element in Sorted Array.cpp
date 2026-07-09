class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0;
        int j = n- 1;
        int f =0;
        while(i < n){
            if(nums[i] == target && nums[j] == target)
                return {i,j};
            if(nums[i] == target)
            {
                j--;
                f = 1;
            }
            else if(nums[j] == target)
                i++;
            else{
                i++;
                j--;
            }
        }
        if(f == 1)
            return {i,j};
        return {-1,-1};
    }
};
