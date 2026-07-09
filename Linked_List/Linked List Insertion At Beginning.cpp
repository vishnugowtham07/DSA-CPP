
class Solution {
  public:
    Node *insertAtFront(Node *head, int x) {
        // Code here
        Node* first = new Node(x);
        first -> next = head;
        head = first;
        return head;
    }
};
