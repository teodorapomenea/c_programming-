#include <stdio.h>
 #include <conio.h>
  #include <stdlib.h>
  #include <malloc.h> 
  #include <string.h> 
 
typedef struct tnod 
{  char * word;  int frequency; 
 struct tnod *next; }TNOD; 
 
TNOD *first, *last; 
 
#include "citcuv.cpp" #include "incnod.cpp" #include "elibnod.cpp" #include "add.cpp" #include "search.cpp" #include "erase.cpp" 
 
void ordlist()
 {   /* extern  TNOD *first, *last   */   TNOD *p, *p1, *q; 
  int ind;  
   if (first == 0)     
   return; /* Empty list */ 
 
  ind = 1;  
   while(ind)   /* interchange the neighboring nodes that are not in alphabetical order */    
    {       ind = 0;    
	   p = first; /* p points to the current node */    
     p1 = 0; /* p1 points to the previous node */       q = p->next; /* q points to the next node */ 
 
      while (q != 0) /* next node exists */        
	       if (stricmp (p -> word, q -> word)> 0)             /* The words from the current node and the next one are not in alphabetical order, and must be interchanged  */                {                 if (p == first) /* the current node has no a previous one */                    first = q; /* q becomes the first node of the list */                 else 
11 
 
                    p1->next = q; /* q is after p1 */         
					        p->next = q->next;        
							         q->next = p; /* p is after q */     
									             p1 = q;               
												    q = p->next;          
													        if(q == 0)                   
															   last = p;             
															        ind = 1; /* there is a permutation, so the ordering is not finished yet */                } 
																	/* End if */             else /* advancing to the next pair */                
																	  {                   p1 = p;                 
																	    p = q;                  
																		 q = q->next;                   } /* End else */     } /* End while(ind) */ } /* End ordlist */ 
 
int main() /* read a text and displays the words in alphabetical order */ {   TNOD *p, *q;   first = last = 0; /* The list is empty */  
 while ((p = add())!= 0)         if ((q = search(p->word))!= last)            {             q->frequency ++;             erase();            }     /* Sort */   ordlist(); 
 
  /* Print the nodes in alphabetical order */ 
    for (p=first; p; p = p->next)  
	   printf ("\n Thes word %s has the frequency = %d \n", p->word, p->frequency); 
    getch (); } 
  
  
  
