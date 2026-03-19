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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL ||  head->next==NULL ) return NULL;
        ListNode* ptr1=head;
        ListNode* ptr2=head;
        int count=1;
        while(count!=n){
            ptr2=ptr2->next;
            count++;
        }
        if(ptr2->next!=NULL){
            ptr2=ptr2->next;
        
        while(ptr2->next!=NULL){
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        ptr1->next=ptr1->next->next;
        }else{
            return head->next;
        }
        return head;

    }
};