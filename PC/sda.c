#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <malloc.h>
 typedef struct node
{
  int data;
  char*word;
  struct node *next;
}NODE;
 
NODE *first, *last;
char *citcuv()
/* - Reads a word and keeps it in the heap memory;
- Returns the pointer to that word or zero in the case of EOF */
{
  int c, i;
  char t[255];
  char *p;
/* skip over characters that are not letters */
  while ((c = getchar ()) < 'A' || (c > 'Z' && c < 'a') || c > 'z')
    if (c == '*')
      return 0;			/* EOF case */
/* read a word and keep it in the vector t */
  i = 0;
  do
    {
      t[i++] = c;
    }
  while (((c = getchar ()) >= 'A' && c <= 'Z' || c >= 'a') && c <= 'z');
  if (c == '*')
    return 0;
  t[i++] = '\0';
/* the word is saved in the heap memory */
  if ((p = (char *) malloc (i)) == 0)
    {
      printf ("Insufficient memory \n");
      exit (1);
    }
  strcpy (p, t);
  return p;
}
int incnod (NODE * p)
/* tries to load the current data in the node p and shows if it was done successfully */
{
  /*Check if the word has been read. Remember, citcuv() returns the word. If the return value is 0, it means the read didn't work */
    if ((p->word = citcuv()) == 0) 
    return -1;
  /*Initialise the frequency with 1. This is the number of times the word is in the list. First time it's 1 */
   else
  /*We return 1 for a successful run */
  return 1;
}

void elibnod (NODE * p)
/* Release the heap memory areas allocated by a pointer type node p */
{
  free (p->word);
  free (p);
}

NODE *add ()
/* - Adds a node to a simple linked list;
- Returns the pointer to this node or zero if it isn't added. */
{/*First, we need the first and last nodes, which are global variables, so we read them as "extern" */
 extern NODE *first, *last; 
 NODE * p; 
 int n; 
   n = sizeof(NODE); 
   if (((p = (NODE *)malloc (n)) != 0) && (incnod(p) == 1))  
   {  if (first == 0) /* list is empty */   
   first = last = p;   
   else   
   {         last->next = p; /* p becomes the last node */    
   last = p;         }   
   p->next = 0;  
   return p;   }  
       if (p == 0) /* the node was not inserted in the list */   {    printf ("Insufficient memory \n");    exit(1);   }  elibnod(p);  return 0; } 

void afis()				/* delete the last node from the list */
{
  extern NODE *first, *last;
  NODE *p;
  
  for (p = first; p; p = p->next )
    printf ("\n  %s :   %d \n",  p->word, p->data );
}

int main()
{   NODE *p, *newNode, *t, *temp1,*temp2;
	first = 0;
    last = 0;	
	int n,k,i,j;
	
	
	printf("Input number of elements in the linked list?");
	scanf("%d",&n);
	printf("Input the elements in the linked list:\n");
	for(i=1;i<=n;i++)
	{
    		if(first==NULL)
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
            
            p = add ();}

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
}
