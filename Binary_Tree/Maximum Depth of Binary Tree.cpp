
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        int c1 = maxDepth(root -> left);
        int c2 = maxDepth(root -> right);
        int ans = max(c1 , c2);
        return ans + 1;
    }
};
