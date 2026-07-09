
class Solution {
  public:
    void print(Node* root , vector<int>& arr){
        if(root == NULL)
            return ;
        
        arr.push_back(root -> data);
        print(root -> left , arr);
        print(root -> right , arr);
    }
    vector<int> preOrder(Node* root) {
        // code here
        vector<int> arr;
        print(root, arr);
        return arr;
        
    }
};
