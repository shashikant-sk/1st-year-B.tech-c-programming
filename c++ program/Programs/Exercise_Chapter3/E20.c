/* 
E20 - Program to delete all dupliactes from an unsorted single linked list
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
struct node *DeleteDuplicates(struct node *start);

main()
{
	struct node *start=NULL;	
	start=create_list(start);
	display(start);
	DeleteDuplicates(start);
	display(start);
}/*End of main()*/

struct node *DeleteDuplicates(struct node *start)
{
	struct node *p1, *p2,*duplicate;
	p1=start; 
   
	while(p1!=NULL) 
	{ 
		p2 = p1; 
		while(p2->link != NULL) 
		{ 
			if(p1->info == p2->link->info) 
			{ 
				duplicate=p2->link; 
				p2->link=p2->link->link; 
				free(duplicate); 
			} 
			else 
				p2=p2->link; 
		} 
		p1=p1->link; 
  } 
}/*End of DeleteDuplicates()*/     

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

