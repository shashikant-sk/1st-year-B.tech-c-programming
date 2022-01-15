// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int amt;
//     int qty;
//     float uprice;
//     struct node *prev;
//     struct node *next;
// } *head=NULL,*tail=NULL;
// void insert(int amt,int qty)
// {
//     struct node *newnode;
//     if(head==NULL)
//     {
//         head=(struct node*)malloc(sizeof(struct node));
//         head->amt=amt;
//         head->qty=qty;
//         head->uprice=amt/qty;
//         head->prev=NULL;
//         head->next=NULL;
//         tail=head;
//     }
//     else
//     {
//         newnode=(struct node*)malloc(sizeof(struct node));
//         newnode->amt=amt;
//         newnode->qty=qty;
//         newnode->uprice=(float)amt/qty;
//         newnode->prev=tail;
//         newnode->next=NULL; 
//         tail->next=newnode;
//         tail=newnode;
//     }
// }
// void display()
// {
//     struct node *temp;
//     if(head==NULL) printf("No data found in the List!!");
//     else
//     {
//         temp=head;
//         printf("\n");
//         while(temp!=NULL)
//         {
//             printf("%d,%d,%.2f->",temp->amt,temp->qty,temp->uprice);
//             temp=temp->next;
//         }
//         printf("NULL\n\n");
//     }
// }
// void delAtPos(int pos)
// {
//     struct node *temp, *position;
//     int i=1;
//     temp=head;
//     if (head==NULL) printf("\nList is empty\n");
//     else
//     {
//         if(pos==1)
//         {
//             position=head;
//             head=head->next;
//             if (head!=NULL) head->prev = NULL;
//             free(position);
//             return;
//         }
//         while(i<pos-1)
//         {
//             temp=temp->next;
//             i++;
//         }
//         position=temp->next;
//         if (position->next!=NULL) position->next->prev = temp;
//         temp->next=position->next;
//         free(position);
//     }
// }
// void delKey(int key)
// {
//     struct node *temp;
//     int i=1,pos=1;
//     if (head==NULL) printf("\nList is empty\n");
//     else
//     {
//         temp=head;
//         while(temp!=NULL)
//         {
//             if(temp->amt==key||temp->qty==key) break;
// 			pos++;
// 			temp=temp->next;
// 		}
//         delAtPos(pos);
//     }
// }
// int main()
// {
//     insert(5000,40);
//     insert(7000,60);
//     insert(8000,50);
//     insert(9000,70);
//     insert(10000,90);
//     printf("Linked List: ");
//     display();
//     printf("After deletion: ");
//     delKey(70);
//     display();
//     /*while(1)
//     {
//         printf("\n0. Exit\n1. Insert\n2. Display\n3. Delete\n4. Sort\n\n")
//         printf("Enter your choice: ");
//         scanf("%d",&ch);
//     }*/
//     return 0;
// }



#include<stdio.h>
#include<stdlib.h>

/* Link list node */
struct Node
{
	int amt;
	int qty;
	int unit;
	struct Node* next;
	struct Node* prev;
};
struct Node *head=NULL, *newnode=NULL, *last=NULL,*temp=NULL; 




void traverseList()
{
    // Return if list is empty 
    if(head == NULL)
    {
        printf("List is empty.");
        return;
    }
    
    temp = head;
    while(temp != NULL)
    {
        printf("Unit Price = %d Total Amount = %d Quantity = %d\n", temp->unit,temp->amt,temp->qty); // Print data of current node
        temp = temp->next;                 // Move to next node
    }
    
    temp=NULL;
}

    
void createNode(int a,int q)
{
    struct Node *temp2;
    if(head==NULL)
    {
	head = (struct Node *)malloc(sizeof(struct Node));
	head->amt=a;
	head->qty=q;
	head->unit=a/q;
	head->next=NULL;
	head->prev=NULL;
	last=head;
    }
    else
    {
    	temp2=(struct Node *)malloc(sizeof(struct Node));
    	temp2->amt=a;
	temp2->qty=q;
	temp2->unit=a/q;
	temp2->next=NULL;
	temp2->prev=last;
	last->next=temp2;
	last=temp2;
    }
    temp2=NULL;
}

void delete(int n)
{
	if(head == NULL)
    	{
        	printf("List is empty.");
        	return;
    	}
    
    	temp = head;
    	temp = temp->next; 
      	while(temp->next != NULL)
    	{
        	if(temp->unit == n)
        	{
        		printf(" %d unit priced item deleted\n",temp->unit);
        		if(temp == head)
        		{
        			head=temp->next;
    				head->prev=NULL;
    				free(temp);
        		}
        		else if(temp == last)
        		{
        			last=temp->prev;
        			last->next==NULL;
        			free(temp);
        		}
        		else
        		{
        			temp->prev->next=temp->next;
        			temp->next->prev=temp->prev;
        			free(temp);
        		}
        		return;
        	}
        	else
        		temp=temp->next;
        		
    	}
       temp=NULL;
}
void sortList() 
{  
    struct Node *current = NULL, *index = NULL;  
    int temp;  
    //Check whether list is empty  
    if(head == NULL) 
    {  
        return;  
    }  
    else 
    {  
        //Current will point to head  
        current=head;
        while(current->next != NULL) 
        {  
            //Index will point to node next to current  
            index = current->next; 
            while(index != NULL)
            { 
                //If current's data is greater than index's data, swap the data of current and index  
                if(current->unit > index->unit) 
                {  
                    temp = current->unit;  
                    current->unit = index->unit;  
                    index->unit = temp;  
                }
                index=index->next; 
            }
            current=current->next;  
        }  
    }  
}  

int main()
{
    int n,a,q,u,i;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
    	printf("Enter total sale amount: ");
    	scanf("%d",&a);
    	printf("Enter quantity of sale: ");
    	scanf("%d",&q);
    	createNode(a,q);
    }
    printf("\nPrinting elements in linked list: \n"); 
    traverseList();
    printf("Enter unit price to delete from list: \n");
    scanf("%d",&u);
    delete(u);
    printf("\nLinked list after sorting nodes: \n"); 
    sortList();
    traverseList();
    return 0;
}