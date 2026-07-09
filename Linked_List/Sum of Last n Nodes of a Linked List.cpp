class Solution {
    
  public:
    int length(Node* head){
        int len = 0;
        Node* temp = head;
        while(temp){
            len++;
            temp = temp -> next;
        }
        return len;
    }
    int sumofNodes(Node* head, int n) {
        // Code Here
        int len = length(head);
        int mid = (len - n )+1;
        
        Node* temp = head;
        int c =1;
        int sum = 0;
        while(temp){
            if(c >= mid){
                sum = sum + temp -> data;
              //  temp =temp -> next;
            }
            temp = temp -> next;
            c++;
            
        }
        
        return sum;
    }
};
