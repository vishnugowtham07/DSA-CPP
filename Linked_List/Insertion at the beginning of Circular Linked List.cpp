
class Solution {
  public:
    Node* insertAtBeginning(Node* tail, int key) {
        // code here
        Node* nn = new Node(key);
        nn -> next = tail  -> next;
        tail -> next = nn;
        return nn;
    }
};
