#include<stdio.h>
int main()
{ int i,j,m,n,p,mat[i][j];
  int found=0;
  scanf("%d %d %d",&m,&n,&p);
  for(i=0; i<m; i++)
		for(j=0; j<n; j++)
		{
			printf("\tElem [%d,%d]= ", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  if (p==mat[i][j]) { found=1; break;}
  if(found) printf("\nYES"); else printf("\nNO");
  getch();
}
