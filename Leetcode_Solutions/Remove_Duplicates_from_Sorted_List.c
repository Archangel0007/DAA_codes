/*
  The given code solves the 83rd problem of leet code "Remove Duplicates from Sorted List"
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *temp=head;
    if(head==NULL){return(NULL);}
    while(head->next!=NULL){
        if(head->next->val==head->val){
            head->next=head->next->next;
        }
        else{
            head=head->next;
        }
    }
    return(temp);
}
