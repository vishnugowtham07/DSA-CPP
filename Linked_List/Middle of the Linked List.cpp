/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    int length(ListNode* head){
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL){
            count++;
            temp = temp -> next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        int mid = (length(head)/2)+1;

        ListNode* temp = head;
        int count = 1;
        while(temp != NULL){
            if(count < mid){
                count++;
                temp = temp -> next;
            }
            else{
                return temp;
            }
        }
        return temp;
    }
};
