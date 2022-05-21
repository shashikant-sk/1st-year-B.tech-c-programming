/*
E28 - To find the middle node in a single linked list 
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
};

struct node *create_list(struct node *start);
void display(struct node *start);
struct node *addatbeg(struct node *start,int data);
struct node *addatend(struct node *start,int data);
int findMiddle(struct node *start);

main()
{
	struct node *start=NULL;	
	start=create_list(start);
	display(start);
		
	if(start!=NULL)
        printf("Middle element is %d\n",findMiddle(start) );
}/*End of main()*/

findMiddle(struct node *start)
{
	struct node *slow, *fast;
	if(start->link==NULL) /*only one node*/
		return start->info;
	slow=fast=start;
	
	/*while(fast!=NULL && fast->link!=NULL)*/ /*this condn gives (n/2+1)th as the middle node in case of even nodes*/
	while(fast->link!=NULL && fast->link->link!=NULL) /*this condn gives (n/2)th as the middle node in case of even nodes*/
	{
		slow=slow->link;
		fast=fast->link->link;
	}
	return slow->info; 
}/*End of findMiddle()*/

struct node *create_list(struct node *start)
{
	int i,n,data;
	printf("Enter the number of nodes : ");
	scanf("%d",&n);
	start=NULL;
	if(n==0)
		return start;

	printf("Enter the element to be inserted : ");
	scanf("%d",&data);
	start=addatbeg(start,data);

	for(i=2;i<=n;i++)
	{
		printf("Enter the element to be inserted : ");
		scanf("%d",&data);
		start=addatend(start,data);	
	}
	return start;
}/*End of create_list()*/

void display(struct node *start)
{
	struct node *p;
	if(start==NULL)
	{
		printf("List is empty\n");
		return;
	}
	p=start;
	printf("List is :\n");
	while(p!=NULL)
	{
		printf("%d ",p->info);
		p=p->link;
	}
	printf("\n\n");
}/*End of display() */

struct node *addatbeg(struct node *start,int data)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=start;
	start=tmp;
	return start;
}/*End of addatbeg()*/

struct node *addatend(struct node *start,int data)
{
	struct node *p,*tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	p=start;
	while(p->link!=NULL)
		p=p->link;
	p->link=tmp;
	tmp->link=NULL;
	return start;
}/*End of addatend()*/

