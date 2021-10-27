#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

int count_string_b_a(const char *a, const char *b)
{
    int count = 0;
    size_t lenb = strlen(b);
    const char *p = a;
    while(NULL != (p = strstr(p, b)))
	{
        ++count;
        p += lenb;
    }
    return count;
}

int main(){
    int cont;
    char a[40], b[10];

    printf("A>");
    gets(a);
    printf("B>");
    gets(b);
    cont = count_string_b_a(a, b);
    printf("B \"%s\" appears %d times in A \"%s\"\n", b, cont, a);

    return 0;
}

