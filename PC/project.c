#include<stdio.h>
#include <stdlib.h>
struct node
{ char *word;
  int data;
  struct node *next;
};
int main()
{
	struct node *temp1,*temp2, *t,*newNode, *startList;
	int n,k,i,j;
	startList=NULL;
	printf("Input number of elements in the linked list?\n");
	scanf("%d",&n);


	printf("Input the elements in the linked list:\n");

	for(i=1;i<=n;i++)
    {struct Node*temp= (struct Node*)malloc(sizeof(struct node)); //creating a 
                                                                 //    Node
    strcpy(temp->word,strings);
    temp->marks=-1;
    temp->next=NULL;
    if(head == NULL){
        head = temp;
        return;
    }else{
        struct Node *p =head;
        while(p->next)
            p= p->next;
        p->next=temp;
     } }
	for(i=1;i<=n;i++)
	{
    		if(startList==NULL)
    		{
			newNode=(struct node *)malloc(sizeof(struct node));
			scanf("%d",&newNode->data);
			newNode->next=NULL;
			startList = newNode;
			temp1=startList;
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
	char temp[20];
	for(i=n-2;i>=0;i--)
	{
		temp1=startList;
		temp2=temp1->next;
		for(j=0;j<=i;j++)
		{
			if(temp1->data > temp2->data)
			{
				k=temp1->data;
				temp1->data=temp2->data;
				temp2->data=k;
				strcpy(temp, temp1->word);
                strcpy(temp1->word,temp2->word );
                strcpy(temp2->word, temp1);
			}
			temp1=temp2;
			temp2=temp2->next;
		}
	}
	printf("Sorted order is: \n");
	t=startList;
	while(t!=NULL)
	{
		printf ("\n %s :   %d \n",  t->word, t->data );
		t=t->next;
	    
	}
}
