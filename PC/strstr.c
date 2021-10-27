#include <stdio.h>
#include <string.h>
#include <conio.h>
#include<stdlib.h>
int main ()
{
	int k=0,l;
 	char a[100],b[10];
	gets(a);
	gets(b);
	l=strlen(b);
	const char *p=a;
	while(p= strstr(p,b)) 
	{ k++;
	  p+=l;
	}
	printf("%s appears %d times in %s" ,b,k,a );
	getch();
}
