#include <stdio.h>
#include<string.h>
int main ()
{
   FILE *file = fopen ( "F:\\test_file.txt", "r" );
   char word[12];
   int count = 0; 
   char line [ 128 ];
    
   printf("Enter the word: "); // search word
   scanf("%s",word);
    
   if ( file != NULL ) {
      while ( fgets ( line, sizeof line, file ) != NULL ) { // read a line 
         if (strstr(line, word)!=NULL){ // word is found in the line
             count++; // count increased by one 
         }
      }
      fclose ( file );
   }
   printf("Number of times the word appears in the file is: %d", count); 
   getch();
}
