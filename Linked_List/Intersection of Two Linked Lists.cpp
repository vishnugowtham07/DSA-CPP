/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int length(ListNode* head){
        int len = 0;
        ListNode* temp = head;
        while(temp ){
            len ++;
            temp =temp -> next;
        }
        return len;

    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;


        int n1 = length(temp1);
        int n2 = length(temp2);

        int deff = abs(n1 -n2);

        int f;
        if(n1 > n2)
            f = 0;
        else
            f =1;

        if(f == 0){
        while(deff > 0){
            temp1 = temp1 -> next;
            deff--;
        }
        }
        else{
            while(deff > 0){
                temp2 = temp2 -> next;
                deff--;
            }
        }
        
        while(temp1 && temp2){
            if(temp1  == temp2 ){
                return temp1;
            }
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        return NULL;
    }
};
