
 class Solution {
    int height(TreeNode* root){
        if(root == nullptr)return 0;

        int left = height(root -> left);
        int right = height(root -> right);

        return 1 + max(left,right);
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;

        int leftHeight = height(root -> left);
        int rightHeight = height(root -> right);

        int diff = abs(leftHeight - rightHeight);

        bool isLeftBalanced = isBalanced(root -> left);
        bool isRightBalanced = isBalanced(root -> right);

        if(diff <= 1 && isLeftBalanced && isRightBalanced)
            return true;
            
        return false;        
    }
};
