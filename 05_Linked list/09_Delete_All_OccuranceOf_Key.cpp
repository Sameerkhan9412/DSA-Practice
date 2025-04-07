class Solution {
    public:
      void deleteAllOccurOfX(struct Node** head_ref, int x) {
          if (head_ref == NULL || *head_ref == NULL) return;
  
          Node* curr = *head_ref;
  
          while (curr != NULL) {
              if (curr->data == x) {
                  Node* toDelete = curr;
  
                  // If it's the head node
                  if (curr->prev == NULL) {
                      *head_ref = curr->next;
                      if (*head_ref != NULL)
                          (*head_ref)->prev = NULL;
                  } else {
                      curr->prev->next = curr->n ext;
                      if (curr->next != NULL)
                          curr->next->prev = curr->prev;
                  }
  
                  curr = curr->next;
                  delete toDelete;
              } else {
                  curr = curr->next;
              }
          }
      }
  };
  