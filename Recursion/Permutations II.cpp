class Solution {
public:
    void allpermutation(vector<int>& nums , vector<int>& output , vector<vector<int>>& finaloutput)
    {
        if(nums.size() == 0){
            finaloutput.push_back(output);
            return;
        }
        for(int i = 0; i < nums.size(); i++){
            
            int ch = nums[i];
            vector<int> new_input = nums;
            new_input.erase(new_input.begin()+i);
            output.push_back(ch);
            while(i+1 < nums.size() && nums[i] == nums[i + 1])
            {
                i ++;
            }
            allpermutation(new_input,output,finaloutput);
            output.pop_back();
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector< vector<int>> finaloutput;
        vector <int> output ;
        sort(nums.begin(), nums.end());
        allpermutation(nums,output,finaloutput);
        return finaloutput;
    }
};
