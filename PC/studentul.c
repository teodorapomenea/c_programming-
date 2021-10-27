#include <stdio.h>
#include <string.h>

int main ()
{
	int k=0,l;
 	const char a[100];
	gets(a);
	l=strlen("student");
	const char *p=a;
	while(p= strstr(p,"student")) 
	{ k++;
	  p+=l;
	}
	printf("Student appears %d times in %s" ,k,a );
	getch();
}

