class Solution {
    public:
      // Function to find the length of a loop in the linked list.
      int countNodesinLoop(Node *head) {
          // Code here
          Node* slow=head;
          Node* fast=head;
          bool flag=false;
          while(fast!=NULL && fast->next!=NULL){
              fast=fast->next->next;
              slow=slow->next;
              if(slow==fast){
                  flag=true;
                  break;
              }
          }
          
          if(!flag) return 0;
          int count=1;
          while(fast->next!=slow){
              count++;
              fast=fast->next;
          }
          return count;
      }
  };