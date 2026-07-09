class Solution {
public:
        void allsubsets(vector<int>& nums, int idx, vector<int>& current, vector<vector<int>>& result) {
        if (idx == nums.size()) {
            result.push_back(current);
            return;
        }
        
        //Exclude nums[idx]
        allsubsets(nums, idx + 1, current, result);
        
        //Include nums[idx]
        current.push_back(nums[idx]);
        allsubsets(nums, idx + 1, current, result);
        current.pop_back();
        
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        
        allsubsets(nums, 0, current, result);
        
        return result;
    }
};
