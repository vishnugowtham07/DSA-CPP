class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode (-1);
        ListNode* tail = dummy ;

        ListNode* head1 = list1;
        ListNode* head2 = list2;


        if(head1 == NULL){
            return head2;
        }
        if(head2 == NULL){
            return head1;
        }
        while(head1 != NULL && head2 != NULL)
        {
            if(head1 -> val <= head2 -> val)
            {
                tail -> next = head1;
                head1 = head1 -> next;
            }
            else
            {
                tail -> next = head2;
                head2 = head2 -> next;
            }
                tail = tail -> next;
        }
        if(head1 != NULL)
            tail -> next = head1;
        else
            tail -> next = head2;
        return dummy -> next;
    }
};
