/*
  This code solves the 141st Problem on leetcode "Linked List Cycle"
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
      if(head==NULL){return(false);}
      if(head->next==NULL){return(false);}
      ListNode * slow= head;
      ListNode * fast= head;
      while(fast!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==NULL){break;}
        if(fast->next==NULL || fast->next->next==NULL){
          return(false);
        }
        if(slow==fast){
          return(true);
        }

      }
      return(false);
    }
};
