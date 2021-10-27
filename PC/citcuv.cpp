char *citcuv() /* - Reads a word and keeps it in the heap memory; - Returns the pointer to that word or zero in the case of EOF   */ 
{  int c, i;  char t[255];  char * p; /* skip over characters that are not letters */
  while ((c = getchar ()) <'A' || (c> 'Z' && c <'a') || c> 'z') 
   if (c == EOF) 
   return 0; /* EOF case */ /* read a word and keep it in the vector t */  
   i = 0; 
    do  {  t [i ++] = c;  } while (((c = getchar()) >= 'A' && c <= 'Z' || c >= 'a') && c <= 'z'); 
	 if (c == EOF)    
	 return 0; 
	  t[i++] = '\0'; /* the word is saved in the heap memory */ 
 
 if ((p = (char *) malloc(i)) == 0)   
   {      printf("Insufficient memory \n");   
      exit (1);     } 
	   strcpy (p, t); 
	   return p; } 
