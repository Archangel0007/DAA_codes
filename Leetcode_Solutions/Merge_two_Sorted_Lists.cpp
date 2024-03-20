/*
This code solves the 21st problem on leetcode "Merge two Sorted Lists"
*/


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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL){
            return(NULL);
        }
        else if(list1==NULL){
            return(list2);
        }
        else if(list2==NULL){
            return(list1);
        }
        if(list1->val<list2->val){
            struct ListNode * List1=list1;
            while(list1!=NULL && list2!=NULL && list1->next!=NULL){
                if(list1->next->val<list2->val){
                    list1=list1->next;
                }
                else{
                    struct ListNode * temp1=list2;
                    struct ListNode * temp2=list1->next;
                    list1->next=list2;
                    list2=list2->next;
                    list1=list1->next;
                    list1->next=temp2;
                }
            }
            if(list2!=NULL){
                list1->next=list2;
            }
            return(List1);
        }
        else{
            struct ListNode * List2=list2;
            while(list1!=NULL && list2!=NULL && list2->next!=NULL){                
                if(list2->next->val<list1->val){
                    list2=list2->next;
                }
                else{
                    struct ListNode * temp1=list1;
                    struct ListNode * temp2=list2->next;
                    list2->next=list1;
                    list1=list1->next;
                    list2=list2->next;
                    list2->next=temp2;
                }
            }
            if(list1!=NULL){
                list2->next=list1;
            }
            return(List2);
        }
        
        return(NULL);
        
    }
};
