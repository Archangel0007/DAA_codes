
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node* createlist(int n){
	struct node* newnode, *temp;
	int value;
	newnode=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&value);
	newnode->data=value;
	newnode->next=NULL;
	struct node *head=newnode;
	temp=newnode;
	for(int i=1;i<n;i++){
		newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&value);
		newnode->data=value;
		newnode->next=NULL;
		temp->next=newnode;
		temp=temp->next;
	}
	return(head);
}
void display(struct node* x){
	while(x!=NULL){
		printf("%d ",x->data);
		x=x->next;
	}
	printf("\n");
}
struct node* reverse(struct node* x,struct node*y,int n,int m){
	if(m!=n-1){
		struct node* temp;
		temp=x->next;
		x->next=y;
		m++;
		reverse(temp,x,n,m);
	}
	else{
		x->next=y;
		return(x);
	}
}
struct node* find(struct node* head ,int n){
	for(int i=0;i<n;i++){
		head=head->next;
	}
	return(head);
}
int main(){
	int n,x;
	scanf("%d",&n);scanf("%d",&x);
	struct node* head=createlist(n);
	display(head);
	struct node* midhead=find(head,x);
	head=reverse(head,midhead,x,0);
	display(head);	
}