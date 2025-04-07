class Solution {
    public:
        ListNode* reverseLL(ListNode* head){
            ListNode* prevNode = NULL;
            ListNode* currNode = head;
            ListNode* nextNode = NULL;
    
            while (currNode) {
                nextNode = currNode->next;
                currNode->next = prevNode;
                prevNode = currNode;
                currNode = nextNode;
            }
            return prevNode;
        }
    
        int findLen(ListNode* head){
            int count = 0;
            while (head) {
                count++;
                head = head->next;
            }
            return count;
        }
    
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            if (!head) return NULL;
    
            int len = findLen(head);
    
            // Case: remove head
            if (len == n) {
                ListNode* temp = head;
                head = head->next;
                delete temp;
                return head;
            }
    
            // Reverse the list
            head = reverseLL(head);
    
            // Case: remove the first node in reversed list (which is last originally)
            if (n == 1) {
                ListNode* temp = head;
                head = head->next;
                delete temp;
                return reverseLL(head);
            }
    
            // Traverse to (n-1)th node
            ListNode* curr = head;
            for (int i = 1; i < n - 1 && curr->next; i++) {
                curr = curr->next;
            }
    
            // Delete nth node
            ListNode* toDelete = curr->next;
            if (toDelete) {
                curr->next = toDelete->next;
                delete toDelete;
            }
    
            // Reverse back to original order
            return reverseLL(head);     // kuch corner cases miss hojayete h😂😂
        }
    };
    