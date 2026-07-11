class Solution {
  public:
    vector<int> leftView(Node *root) {
        // Base case: If the tree is empty, return an empty vector
        if (root == NULL) {
            return {};
        }

        vector<int> output;
        queue<Node*> pendingNodes;
        pendingNodes.push(root);

        while (!pendingNodes.empty()) {
            int size = pendingNodes.size();

            for (int i = 0; i < size; i++) {
                Node* front = pendingNodes.front();
                pendingNodes.pop();

                if (i == 0) {
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
