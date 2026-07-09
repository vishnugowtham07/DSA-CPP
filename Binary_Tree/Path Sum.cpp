
class Solution {
public:

    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL )
            return 0;
        if(root -> left == NULL && root-> right == NULL)
            if(root -> val == targetSum)
                return 1;
            else
                return 0;

        bool left_path =  hasPathSum(root->left , targetSum - root -> val);
        bool right_path = hasPathSum(root->right , targetSum - root -> val);

        return left_path || right_path;


    }
};
