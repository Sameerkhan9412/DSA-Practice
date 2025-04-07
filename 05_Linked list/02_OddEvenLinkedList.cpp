/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 class Solution {
    public:
        ListNode* oddEvenList(ListNode* head) {
            vector<int> arr1;
            vector<int> arr2;
            ListNode* temp=head;
            int i=0;
            while(temp){
                if(i%2==0){
                    arr2.push_back(temp->val);
                }
                else{
                    arr1.push_back(temp->val);
                }
                i++;
                temp=temp->next;
            }
            i=0;
            temp=head;
            while(i<arr2.size()){
                temp->val=arr2[i];
                temp=temp->next;
                i++;
            }
            i=0;
            while(i<arr1.size()){
                temp->val=arr1[i];
                temp=temp->next;
                i++;
            }
            return head;
        }
    };

    time complxity:O(N)
    space complxity:O(N)