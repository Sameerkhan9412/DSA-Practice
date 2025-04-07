class Solution {
    public:
      /* Should return data of middle node. If linked list is empty, then -1 */
      int getMiddle(Node* head) {
          // code here
          if(head==NULL){
              return -1;
          }
          Node* fast=head;
          Node* slow=head;
          while(fast!=NULL && fast->next!=NULL){//important ques h
              slow=slow->next;
              fast=fast->next->next;
          }
          return slow->data;
      }
  };