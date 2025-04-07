/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//  brote force
// time complxity: O(N2)
 class Solution {
    public:
        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            if(headA==NULL || headB==NULL) return NULL;
            ListNode* tempHead1=headA;
            ListNode* tempHead2=headB;
            while(tempHead1!=NULL){
                tempHead2=headB;
                while(tempHead2!=NULL){
                    if(tempHead1==tempHead2) return tempHead1;
                    tempHead2=tempHead2->next;
                }
                tempHead1=tempHead1->next;
            }
            return NULL;
        }
    };



    