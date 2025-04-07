class Solution {
    public:
      Node* reverseLL(Node* head) {
          Node* prev = NULL;
          Node* curr = head;
          while (curr) {
              Node* nextNode = curr->next;
              curr->next = prev;
              prev = curr;
              curr = nextNode;
          }
          return prev;
      }
  
      Node* addOne(Node* head) {
          if (head == NULL) return NULL;
  
          head = reverseLL(head);
  
          Node* curr = head;
          int carry = 1;  // we start with 1 because we are adding one
  
          Node* prev = NULL;
  
          while (curr && carry) {
              int sum = curr->data + carry;
              curr->data = sum % 10;
              carry = sum / 10;
  
              prev = curr;
              curr = curr->next;
          }
  
          if (carry) {
              prev->next = new Node(carry);
          }
  
          head = reverseLL(head);
          return head;
      }
  };
  