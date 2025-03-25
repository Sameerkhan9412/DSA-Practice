class Solution {
    public:
      // Function to insert a new node at given position in doubly linked list.
      Node *addNode(Node *head, int pos, int data) {
          // code here
          if(head==NULL){
              return NULL;
          }
          Node* temp=head;
          while(pos!=0){
              temp=temp->next;
              pos--;
          }
          Node* newNode=new Node(data);
          newNode->next=temp->next;
          newNode->prev=temp;
          temp->next=newNode;
          if(newNode->next!=NULL){
          newNode->next->prev=newNode;
          }
          return head;
          
      }
  };