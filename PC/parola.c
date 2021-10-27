#include <string.h>
#include <stdlib.h>
#include <conio.h>
int main ()
{ char sir[20];
 int x;
 for (x=0; x<3 && strcmp(sir, "pass"); x++)
  { printf("\nEnter password: "); 
  sirgetch(); 
  printf("*");} 
  if(x==3) exit(1);
  printf("weeeeee");
  getch();
  
}
