TNOD *add() /*  - Adds a node to a simple linked list; - Returns the pointer to this node or zero if it isn't added. */
 {  extern TNOD *first, *last;  TNOD * p; 
  int n; /* a memory area is reserved for this node, which is then filled with data */ 
  n = sizeof(TNOD); 
     
 if (p == 0) /* the node was not inserted in the list */
    {    printf ("Insufficient memory \n");   
	 exit(1);   } 
	 elibnod(p); 
	 return 0; } if (((p = (TNOD *)malloc (n)) != 0) && (incnod(p) == 1)) 
     {  if (first == 0) /* list is empty */  
	   first = last = p;   
	    else     
	      {  last->next = p; /* p becomes the last node */      
		     last = p;         }   
 p->next = 0;    
 return p;   }
