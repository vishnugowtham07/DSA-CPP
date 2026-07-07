class Solution {
  public:
    bool areIdentical(Node *head1, Node *head2) {
        // code here
        Node* temp1 = head1;
        Node* temp2 = head2;
        while(temp1 != NULL && temp2 != NULL){
            if(temp1 -> data != temp2 -> data){
                return 0;
            }
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
            
        }
        if(temp1 ==  NULL && temp2 == NULL)
            return 1;
    }
};
