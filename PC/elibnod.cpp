void elibnod(TNOD *p) /* Release the heap memory areas allocated by a pointer type node p */
 {   free(p->word);  
  free(p); } 
 
 
