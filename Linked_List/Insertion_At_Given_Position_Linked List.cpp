/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        // code here
        Node* nn = new Node(val);
        
        if(pos == 1){
            nn -> next =head;
            return nn;
        }
        
        Node* temp = head;
        int count = 1;
        
        while(temp != NULL && count < pos -1){
            temp = temp -> next;
            count ++;
        }
        Node* temp1 = temp -> next;
        nn -> next = temp1;
        temp -> next = nn;
        
        return head;
    }
};
