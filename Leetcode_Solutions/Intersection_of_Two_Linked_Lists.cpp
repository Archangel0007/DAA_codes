/*
  This code solves the 160th problem of leetcode "Intersection of Two Linked Lists"
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *B=headB;
        if(headA->next==NULL && headB->next==NULL && headA->val==headB->val){
            return(headA);
        }
        else if(headA->val==headB->val && headA->next==headB->next){
            return(headA);
        }
        while(headA!=NULL){
            headB=B;
            while(headA!=headB && headB!=NULL){
                headB=headB->next;
            }
            if(headA==headB){
                return(headA);
            }
            headA=headA->next;  
        }
        
        return(headA);
        
    }
};
