/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void print(Node* root , vector <int>& arr){
        
        if(root == NULL){
            return ;
        }
        
        print(root -> left , arr);
        arr.push_back(root -> data);
        
        
        print(root -> right , arr);
        //return arr;
        
    }
    vector<int> inOrder(Node* root) {
        // code here
        vector<int> arr ;
        print(root , arr);
        return arr;
        
    }
};
