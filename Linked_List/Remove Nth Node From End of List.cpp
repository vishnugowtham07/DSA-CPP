
class Solution {
public:

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;

        for(int i = 1; i <= n ;i++){
           fast = fast -> next;    
        }
        if(fast == NULL){
            return head -> next;
            ListNode* nn =  head -> next ;
            delete head;
            return nn;
        }

        while(fast -> next != NULL){
            fast = fast -> next;
            slow = slow ->next;
        }
        if(slow != NULL && slow -> next != NULL)
        {
            ListNode* Todelete = slow -> next;
            slow -> next = slow-> next -> next;
            delete Todelete;
        }
        return head;
    }
};
