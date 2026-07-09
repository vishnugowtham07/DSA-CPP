class Solution {
public:
    void allcombination(vector<int>& nums, int idx, vector<int>& output, vector<vector<int>>& finaloutput , int target ) {
    {
        if(idx == nums.size()){
            if(target == 0)
            finaloutput.push_back(output);
                return;
        }
    }
        if(nums[idx] <= target){
            output.push_back(nums[idx]);
            allcombination(nums , idx , output , finaloutput , target - nums[idx]);
            output.pop_back();

        } 
        allcombination(nums , idx +1, output , finaloutput , target);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector <int> output;
        vector<vector<int> > finaloutput;

        allcombination(nums , 0 , output , finaloutput, target);
        return finaloutput;
    }
};
