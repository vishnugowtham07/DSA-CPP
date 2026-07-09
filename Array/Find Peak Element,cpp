class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int start = 1;
        int end = n - 2;
        int mid = 0;
        if(n == 1)
            return 0;
        if(nums[0] > nums[1])
            return 0;
        else if(nums[n-1] > nums[n -2])
            return n-1;
        while(start <= end){
            mid = start + (end - start)/2;
            int prev = (mid - 1);
            int next = (mid + 1);

            if(nums[mid] > nums[prev] && nums[mid] > nums[next])
                return mid;
            else if(nums[prev] > nums[mid])
                end = mid - 1;
            else
                start = mid +1;
        }
        return mid;
    }
};
