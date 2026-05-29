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
    
        ListNode* merge(ListNode* l1,ListNode* l2){
      ListNode dummy(0);
      ListNode* tail=&dummy;

       while(l1 && l2){
      if(l1->val < l2->val){
        tail->next=l1;
        l1=l1->next;
      }
      else{
        tail->next=l2;
        l2=l2->next;
      }
      tail=tail->next;
       }
      if(l1)  tail->next=l1;
      else   tail->next=l2;

          return dummy.next;

       }
        ListNode* sortList(ListNode* head){
          if(!head || !head->next) return head;

        // Step 1: Find middle
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        while(fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Break into two halves
        prev->next = NULL;

        // Step 2: Sort both halves
        ListNode* left = sortList(head);
        ListNode* right = sortList(slow);

        // Step 3: Merge
        return merge(left, right);
    }
};
       
       