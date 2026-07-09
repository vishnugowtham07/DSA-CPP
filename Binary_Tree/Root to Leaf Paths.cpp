class Solution {
  public:
    void solve(Node* root , vector<int>& ans , vector<vector<int>>& output){
        if(root == NULL)
        {
            return ;
        }
        
        ans.push_back(root -> data);
        
        if(root -> left == NULL && root -> right == NULL)
            output.push_back(ans);
            
        solve(root -> left , ans, output);
        solve(root -> right , ans ,output);
        ans.pop_back();
    }
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector <int> ans ;
        vector<vector<int>> output;
        solve(root, ans, output);
        return output;
        
    }
};
