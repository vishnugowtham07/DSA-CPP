
class Solution {
public:
    int height(TreeNode* root )
    {
        if(root == NULL)
            return 0;
        int c1 = height(root -> left );
        int c2 = height(root -> right );
        return 1 + max(c1,c2);
    }
    int diameterOfBinaryTree(TreeNode* root) {
       
       if(root == NULL)
            return 0;
        int left = height(root -> left);
        int right = height(root -> right);

        int d1  = left + right;
        int d2  = diameterOfBinaryTree(root -> left);
        int d3  = diameterOfBinaryTree(root -> right);
        return max(d1,(max(d2,d3)));
    }
};
