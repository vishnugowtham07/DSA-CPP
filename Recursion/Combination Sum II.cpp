class Solution {
public:
    void allcombination(vector<int>& nums , int idx , int target , vector<int >& output, vector<vector<int>>& finaloutput){
        
        if(idx == nums.size()){
            if(target == 0)
                finaloutput.push_back(output);
            return;
        }
        if(nums[idx] <= target){
            output.push_back(nums[idx]);
            allcombination(nums,idx+1 , target - nums[idx] , output , finaloutput);
            output.pop_back();
            
        }
        int nextidx = idx + 1;
        while(nextidx < nums.size() && nums[idx] == nums[nextidx]){
            nextidx++;
        }
        allcombination (nums,nextidx ,target ,output, finaloutput);
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<int> output;
        vector<vector<int>> finaloutput;
        sort(nums.begin(), nums.end());
        allcombination(nums,0,target,output,finaloutput);
        return finaloutput;
    }
};
