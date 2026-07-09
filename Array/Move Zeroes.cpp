class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int n = nums.size();
        // int c = 0;
        // vector <int> ans;
        // for(int i = 0; i < n ; i++){
        //     if(nums[i] == 0)
        //         c++;
        //     else
        //         ans.push_back(nums[i]);
        // }
        // for(int i = 0; i < n ; i++){
        //     ans.push_back(0);
        //     nums[i] = ans[i];
        // }
        int n = nums.size();
        int idx = 0;
        for(int i = 0;i < n;i++){
            int curr = nums[i];
            if(curr != 0){
                nums[idx] = curr;
                idx++;
            }
        }
        while(idx < n){
            nums[idx] = 0;
            idx++;
        }
    }

};
