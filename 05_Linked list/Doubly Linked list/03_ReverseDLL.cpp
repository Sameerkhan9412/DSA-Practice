class Solution {
    public:
      // Function to reverse a doubly linked list
      DLLNode* reverseDLL(DLLNode* head) {
          // Your code here
          if(head==NULL || head->next==NULL) return head;
          DLLNode* currNode=head;
          DLLNode* nextNode=NULL;
          while(currNode!=NULL){
              nextNode=currNode->next;
              
              currNode->next=currNode->prev;
              currNode->prev=nextNode;
              head=currNode;
              currNode=nextNode;
          }
          return head;
      }
  };
  