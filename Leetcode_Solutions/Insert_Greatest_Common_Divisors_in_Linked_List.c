/*
  This code solves the 2807th problem on leetcode "Insert Greatest Common Divisors in Linked List"
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int gcd(int a,int b){
    if(a==0){return(b);}   
    return(gcd(b%a,a));
} 
struct ListNode* insertGreatestCommonDivisors(struct ListNode* head){
    if(head->next==NULL){
        return(head);
    }
    struct ListNode* head1= head;
    while(head->next!=NULL){
        struct ListNode* temp=(struct ListNode*)malloc(sizeof(struct ListNode));
        int val=gcd(head->val,head->next->val);
        temp->val=val;
        temp->next=head->next;
        head->next=temp;
        head=head->next->next;
    }
    return(head1);
}
