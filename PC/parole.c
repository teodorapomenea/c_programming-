
#include<stdlib.h>
#include<string.h>
int main()
{
	char p[20];
	int i,k=0;

	do{ printf("\nEnter:");
		for(i=0;i<6;i++)
	   
	     {
		 p[i]=getch();
	     printf("*");}
	     k++;
	    
	  }
	while(k!=3 && strcmp(p,"parola"));
	if(k==3) exit(1);
	printf("yay");
	getch();
}
