class Solution {
    public:
        ListNode* middleNode(ListNode* head) {
            if(head==NULL) return NULL;
            ListNode* fast=head;
            ListNode* slow=head;
            while(fast!=NULL){  //ek baar me 2 pointer isliye nhi bdaya bcz may be fast->next agr null hua to fast->next->next kya hoga, that why
               fast=fast->next;
               if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
               }
                
            }
            return slow;
    
        }
    };