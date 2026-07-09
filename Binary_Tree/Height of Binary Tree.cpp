
class Solution {
  public:
    int max_count = -1;
    void coun(Node* root , int count){
        if(root == NULL){
            max_count = max(count , max_count);
            return ;
        }
        count ++;
        coun(root -> left , count);
        coun(root -> right , count);
    }
    int height(Node* root) {
      
        coun(root , -1);
        return max_count;
    }
};
