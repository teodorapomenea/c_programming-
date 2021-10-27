void erase() /* delete the last node from the list */
 {  extern TNOD *first, *last; 
  TNOD *q, *q1; 
  q1 = 0; 
  q = first; 
  if (q == 0)     return; /* empty list */ 
   while(q != last) /* the list is scrolled */     
   {         q1 = q;       
     q = q-> next;       
   }
     if (q == first)      first = last = 0;  
	 else        
	   { q1->next = 0;        
	    last = q1;         }  
	   elibnod (q); 
} 
