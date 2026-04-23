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
    ListNode* deleteDuplicates(ListNode* head) {
      ListNode* ptr1=head;
        if(ptr1==NULL) return NULL;
        while(ptr1->next!=NULL){
            if(ptr1->val==ptr1->next->val){
                ptr1->next=ptr1->next->next;
            }else{
            ptr1=ptr1->next;
            }
        }
        return head;
    }
};