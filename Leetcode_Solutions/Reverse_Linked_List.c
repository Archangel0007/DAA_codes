/*
  This code solves the 206th problem on leetcode "Reverse Linked List"
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    if(head == NULL || head->next ==NULL){
        return(head);
    }
    struct ListNode* temp=head;
    int x=1;
    while(temp->next!=NULL){
        temp=temp->next;
        x++;
    }
    temp=NULL;
    struct ListNode* temp1=head;
    for(int i=0;i<x;i++){
        temp1=head->next;
        head->next=temp;
        temp=head;
        head=temp1;    
    }
    return(temp);
}
