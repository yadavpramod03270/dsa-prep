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
        ListNode*p= head;
        ListNode*q= head;
        int count=1;
        while(count!=n){
            p=p->next;
            count++;
        }
        if(p->next!=NULL){
            p=p->next;
            while(p->next!=NULL){
                p=p->next;
                q=q->next;
            }
            q->next=q->next->next;
        }else{
            return head->next;
        }
        return head;
        
    }
};