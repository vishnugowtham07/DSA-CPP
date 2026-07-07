/* Node Structure
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        Node* temp = head;
        
        int length = 0;
        while(temp != NULL){
            length ++;
            temp = temp -> next;
        }
        
        Node* temp1 = head;
        
        int l = length - k + 1;
        int count = 1;
        int ans = -1;
        
        while(temp1 != NULL){
            if(count == l){
                ans = temp1 -> data;
                return ans;
            }
            count++;
            temp1 = temp1 -> next;
        }
        return ans;

    }
};
