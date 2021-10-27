#include<stdio.h>

int main()
{
	int a[100][100],i,j,m,s=0;
	printf("Enter the number of lines: ");
	scanf("%d",&m);

	for(i=0;i<m;i++)
	 for(j=0;j<m;j++)
	   {printf("\tElement[%d,%d]=",i+1,j+1);
	    scanf("%d",&a[i][j]);
	   }
	   	for(i=0;i<m;i++)
	 { for(j=0;j<m;j++)
	   printf("\t%d",a[i][j]);
	   printf("\n");
    }
    for(i=0;i<m;i++)     
       s=s+a[i][i];
    
       printf("%d ",s);
       getch();
}
