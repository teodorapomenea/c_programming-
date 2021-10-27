#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

typedef struct tnod
{
  char *word;
  int data;
  struct tnod *next;
} TNOD;

TNOD *first, *last;

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

int incnod (TNOD * p)
/* tries to load the current data in the node p and shows if it was done successfully */
{
  /*Check if the word has been read. Remember, citcuv() returns the word. If the return value is 0, it means the read didn't work */
    if ((p->word = citcuv()) == 0) 
    return -1;
  /*Initialise the frequency with 1. This is the number of times the word is in the list. First time it's 1 */
   
  /*We return 1 for a successful run */
  return 1;
}

void elibnod (TNOD * p)
/* Release the heap memory areas allocated by a pointer type node p */
{
  free (p->word);
  free (p);
}

TNOD *add ()
/* - Adds a node to a simple linked list;
- Returns the pointer to this node or zero if it isn't added. */
{/*First, we need the first and last nodes, which are global variables, so we read them as "extern" */
 extern TNOD *first, *last; 
 TNOD * p; 
 int n; 
   n = sizeof(TNOD); 
   if (((p = (TNOD *)malloc (n)) != 0) && (incnod(p) == 1))  
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
  extern TNOD *first, *last;
  TNOD *p;
  /*Iterate through all the nodes and print the word and frequency */
  for (p = first; p; p = p->next )
    printf ("\n  %s  = %d \n",  p->word, p->data );
}


int main()				/* read a text and displays the frequency of words in text */
{
  TNOD *p, *q, *newNode, *t, *temp1,*temp2;
	first = 0;
    last = 0;	
	int n,k,i,j;
	
            
   printf("Input number of elements in the linked list?");
  scanf("%d",&n);
  
	printf("Input the elements in the linked list:\n");
	for(i=1;i<=n;i++)
	
	{      
    		if(first==0)
    		{
			newNode=(TNOD*)malloc(sizeof(TNOD));
			scanf("%d",&newNode->data);
			newNode->next=NULL;
			first = newNode;
			temp1=first;
		}
		else
		{
			newNode=(TNOD *)malloc(sizeof(TNOD));
			scanf("%d",&newNode->data);
			newNode->next=NULL;
			temp1->next = newNode;
			temp1=newNode;
		}
	}
  /* In a while loop, we add a new node, then check if its already in the list. If it is, we increase the frequency by 1 and erase it
   since we already have it, we don't need to have it twice. I know, very inefficient again, feel free to check for the node before adding it,
   for extra perfomance gains :) */
  	
      
    
/* Lists the words and their frequencies */
  afis ();
}



