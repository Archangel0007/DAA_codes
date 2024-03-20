/*
 This code solves the 1669th probloem of leetCode "Merge in between linked lists"
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int count=1;
        ListNode *La =(ListNode*)malloc(sizeof(ListNode)) ,*Lb=(ListNode*)malloc(sizeof(ListNode)),*l1copy=(ListNode*)malloc(sizeof(ListNode));
        l1copy=list1;
        while(count!=a){
            list1=list1->next;
            count++;
        }
        La=list1;

        list1=l1copy;
        count=1;
        while(count!=b+2){
            list1=list1->next;
            count++;
        }
        Lb=list1;
        cout<<Lb->val;
        La->next=list2;
        list1=l1copy;
        while(list1->next!=NULL){
            list1=list1->next;
        }

        list1->next=Lb;
        return(l1copy);
    }
};
