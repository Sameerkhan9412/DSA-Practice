class Solution {
    public:
      Node *insertAtEnd(Node *head, int x) {
          // Code here
          
          Node* temp=head;
          Node* NewNode=new Node(x);
          if(head==NULL){
              head=NewNode;
              return head;
          }
          while(temp->next!=NULL){
              temp=temp->next;
          }
          temp->next=NewNode;
          return head;
      }
  };
  