
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        if(x == 1){
            head = head->next;
            return head;
        }
        int count = 1;
        Node* temp = head;
        while(temp != NULL){
            if(count == x-1){
                break;
            }
            count ++;
            temp = temp -> next;
        }
        temp -> next = temp -> next -> next;
        return head;
    }
};
