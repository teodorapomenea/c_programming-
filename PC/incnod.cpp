int incnod(TNOD *p) /* tries to load the current data in the node p and shows if it was done successfully */
 {   if ((p->word = citcuv()) == 0) 
    return -1;  
    p -> frequency = 1;  
    return 1; } 
