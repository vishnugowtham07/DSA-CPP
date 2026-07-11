class Solution {
  public:
  
    Node* insert(Node* root, int key) {
        // code  here
       
        if(root == NULL)
        {
            Node* nn = new Node(key);
            return nn;
        }
            
        if(key < root -> data)
            root -> left = insert(root -> left , key);
        else
            root -> right = insert(root -> right , key);
            
        return root;
    }
};
