#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int a,b,i,j;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		int c[a][b];
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				scanf("%d",&c[i][j]);
			}
		}
		for(i=0;i<b;i++)
		{
			for(j=0;j<a;j++)
			{
				printf("%d ",c[j][i]);
			}
			printf("\n");
		}
	}
	return 0;
}
