#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
typedef struct node
{
  float data;
  struct node *next;
}NODE;
NODE*first,*last;
void newNode(int n);
void sort(int n);
void removeDuplicates() ;
void display();
int main()
{
	int n;
	first=last=NULL;
	printf("Input number of elements in the linked list:\n");
	scanf("%d",&n);
	printf("Input the elements in the linked list:\n");	
	newNode(n);
    sort(n);
    removeDuplicates(); 
    display();
    getch();
}
void newNode(int n)
{       NODE *newNode, *p;
        int i;
		for(i=1;i<=n;i++)     /* adding n nodes */
	{
    		if(first==NULL)  /* the list is empty */
    		{
			newNode=(NODE*)malloc(sizeof(NODE));
			scanf("%f",&newNode->data);
			newNode->next=NULL;
			first = newNode;
			p=first;
		}
		else   /* the list is not empty */
		{
			newNode=(NODE *)malloc(sizeof(NODE));
			scanf("%f",&newNode->data);
			newNode->next=NULL;
			p->next = newNode;
			p=newNode;
		}
	}
}
void sort(int n)   /*Bubble sort*/
	{   float k; /* k is used as a buffer in order to swap the two nodes  */
	     int swapped, i; 
        NODE *p; 
        NODE *q = NULL; 
	  
	 
	    if (first == NULL)  /* do nothing if the list is empty */
	      return;
        
  
    do
    { 
        swapped = 0; 
        p = first; 
  
        while (p->next != q) 
        { 
            if (p->data > p->next->data) 
            {  
               k = p->data; 
               p->data = p->next->data; 
                p->next->data = k;  
                swapped = 1; 
            } 
            p = p->next; 
        } 
        q = p; 
    } 
    while (swapped); 
} 
	
	void removeDuplicates() 
{ 
    NODE* p = first; 
  
    /* Pointer to store the next pointer of a node to be deleted*/
    NODE* q;  
    
    /* do nothing if the list is empty */
    if (p == NULL)  
       return;  
  
    /* Traverse the list till last node */
    while (p->next != NULL)  
    { 
       /* Compare the node  with the next node */
       if (p->data == p->next->data)  /*remove the duplicate */
       { 
                     
           q = p->next->next;   
           free(p->next); 
           p->next = q;   
       } 
       else /* Go to the next node */
       { 
          p = p->next;  
       } 
    } 
} 
 void display()
 {
  NODE *p;
  printf("The elements in the linked list:\n"); 
   p=first;
      /* Traverse the list till last node */
	while(p!=NULL)   
	{
		printf("%f\t",p->data);
		p=p->next;
	}
}
