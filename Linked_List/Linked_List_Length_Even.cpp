
class Solution {
  public:
    bool isEven(Node* head) {
        // code here
        int len = 0;
        Node* temp = head;
        while(temp){
            len ++;
            temp =temp -> next;
        }
        return len % 2 == 0;
    }
};
