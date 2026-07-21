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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL ||k == 0){
            return head;
        }
        ListNode* curr = head;
        int len = 1;
        while(curr->next != NULL){
            curr  = curr->next;
            len++;
        }
        k = k % len;
        while(k != 0){
            ListNode* temp = head;
            while(temp->next->next != NULL){
               temp = temp-> next;
            }
            ListNode* tail = temp -> next;
            temp->next = NULL; 
            tail->next = head;      
            head = tail;
            k--;
        }
        return head;
    }
};