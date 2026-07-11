
class Solution {
  public:
    
    vector<int> rightView(Node *root) {
        //  code here
         if (root == NULL) {
            return {};
        }

        vector<int> output;
        queue<Node*> pendingNodes;
        pendingNodes.push(root);

         //   output.push_back(root -> data);
        while (!pendingNodes.empty()) {
            int size = pendingNodes.size();

            for (int i = 0; i < size; i++) {
                Node* front = pendingNodes.front();
                pendingNodes.pop();

                if (i == size - 1) {
                    output.push_back(front->data);
                }

                if (front->left != NULL) {
                    pendingNodes.push(front->left);
                }
                if (front->right != NULL) {
                    pendingNodes.push(front->right);
                }
            }
        }
        return output;
    }
};
