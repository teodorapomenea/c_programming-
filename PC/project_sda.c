#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <malloc.h>
typedef struct node
{
  int data;
  char name[100];
  struct node *next;
}NODE;

NODE *first, *last;

 void afis()				/* delete the last node from the list */
{
  extern NODE *first, *last;
  NODE *p;
  /*Iterate through all the nodes and print the word and frequency */
  for (p = first; p; p = p->next )
    printf ("\n  %s has  = %d \n",  p->name, p->data );
}
 

int main()
{   NODE *temp1, *temp2, *newNode, *t,*p;
	first = 0;
    last = 0;	
	int n,k,i,j;
	 char strings[25];
	
	printf("Input number of elements in the linked list?");
	scanf("%d",&n);
	printf("Input the elements in the linked list:\n");
	for(i=1;i<=n;i++)
	{
    		if(first==0)
    		{
			newNode=(struct node *)malloc(sizeof(struct node));
			scanf("%d",&newNode->data);
			newNode->next=NULL;
			first = newNode;
			temp1=first;
		}
		else
		{
			newNode=(struct node *)malloc(sizeof(struct node));
			scanf("%d",&newNode->data);
			newNode->next=NULL;
			temp1->next = newNode;
			temp1=newNode;
		}
	}
	printf("Input the names in the linked list:\n");
		for(i=1;i<=n;i++)
		{
	       printf("enter the name: \n");
            
          add ();}


	for(i=n-2;i>=0;i--)
	{
		temp1=first;
		temp2=temp1->next;
		for(j=0;j<=i;j++)
		{
			if(temp1->data > temp2->data)
			{
				k=temp1->data;
				temp1->data=temp2->data;
				temp2->data=k;
			}
			temp1=temp2;
			temp2=temp2->next;
		}
	}
	printf("Sorted order is: \n");
	t=first;
	while(t!=NULL)
	{
		printf("%d\t",t->data);
		t=t->next;
	}
	afis();
	getchar();
}
