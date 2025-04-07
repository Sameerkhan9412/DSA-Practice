class Solution {
    public:
      // Function to sort a linked list of 0s, 1s and 2s.
      Node* segregate(Node* head) {
  
          // Add code here
          Node* temp=head;
          if(head==NULL || head->next==NULL) return head;
          int zcount=0,ocount=0,tcount=0;
          while(temp){
              if(temp->data==0){
                  zcount++;
              }
              else if(temp->data==1){
                  ocount++;
              }
              else{
                  tcount++;
              }
              temp=temp->next;
          }
          temp=head;
          while(zcount!=0){
              temp->data=0;
              zcount--;
              temp=temp->next;
          } 
          while(ocount!=0){
              temp->data=1;
              ocount--;
              temp=temp->next;
          } 
          while(tcount!=0){
              temp->data=2;
              tcount--;
              temp=temp->next;
          }
          return head;
      }
  };

//   optimal approach easy :
if (!head || !head->next) return head;

        Node* zeroDummy = new Node(-1);
        Node* oneDummy  = new Node(-1);
        Node* twoDummy  = new Node(-1);

        Node* zero = zeroDummy;
        Node* one = oneDummy;
        Node* two = twoDummy;

        Node* curr = head;

        // Distribute nodes to 0, 1, and 2 lists
        while (curr) {
            if (curr->data == 0) {
                zero->next = curr;
                zero = zero->next;
            } else if (curr->data == 1) {
                one->next = curr;
                one = one->next;
            } else {
                two->next = curr;
                two = two->next;
            }
            curr = curr->next;
        }

        // Connect the three lists
        zero->next = (oneDummy->next) ? oneDummy->next : twoDummy->next;
        one->next = twoDummy->next;
        two->next = NULL;

        Node* sortedHead = zeroDummy->next;

        // Clean up dummy nodes
        delete zeroDummy;
        delete oneDummy;
        delete twoDummy;

        return sortedHead;
    }