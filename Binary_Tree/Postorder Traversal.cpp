
class Solution {
  public:
    void print(Node* root , vector<int>& arr){
        if(root == NULL)
            return ;
        print(root -> left,arr);
        print(root -> right,arr);
        arr.push_back(root -> data);
    }
    vector<int> postOrder(Node* root) {
        // code here
        vector<int> arr;
        print(root , arr);
        return arr;
        
    }
};
