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
        ListNode* deleteMiddle(ListNode* head) {
            if(!head || !head->next){
                return NULL;
            }
            if(head->next->next==NULL){
                head->next=NULL;
                return head;
            }
            ListNode* slow=head;
            ListNode* fast=head;
            ListNode* prevNode=NULL;
            while(fast && fast->next){
                prevNode=slow;
                slow=slow->next;
                fast=fast->next->next;
            }
            if(prevNode){
                ListNode* temp=prevNode;
                if(temp->next && temp->next->next){
                    temp->next=temp->next->next;
                    slow->next=NULL;
                }
            }
            return head;
        }
    };