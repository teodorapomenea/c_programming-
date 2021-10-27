#include <string.h>
#include <stdlib.h>
int main()
{   int k,i;
	k=0;
	char p[40];

	do { printf("\n Password: ");
		 for(i=0;i<8;i++)
		 { p[i]=getch();
		   
		   printf("*");
		
		 }
		 k++;
	}
	while(k!=3 && strcmp(p,"password"));
	if(k==3) exit(1);
	printf("\n weeee");
}
