TNOD *search(char *c) /* searches for a node in the list, which has a similar word with the argument of the function */ 
{  extern TNOD *first;  
TNOD * p;  
for (p = first; p; p = p->next)     
  if (strcmp (p-> word, c) == 0)      
     return p; /* It was found a node with a c key */ 
	  return 0; /* There is no node in the list of key c */ } 
