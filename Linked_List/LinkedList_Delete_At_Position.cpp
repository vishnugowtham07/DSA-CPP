class Solution {
  public:
    Node *deleteAtPosition(Node *head, int pos) {
        // code here
        int count = 1;
        Node* temp = head;
        //Node* jump = NULL;
        while(temp != NULL){
            if(pos == 1){
                head = head -> next;
                return head;
            }
            if(pos-1 == count){
                //jump = temp -> next;
                break;
            }
            temp = temp -> next;
            count++;
        }
        
        temp -> next = temp -> next -> next;    
        return head;
    }
};
