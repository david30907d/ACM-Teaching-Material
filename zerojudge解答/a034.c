#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a;
	while(scanf("%d",&a)!=EOF)
	{
		int b[1000],i=0,j;
		do
		{
			b[i]=a%2;
			a=a/2;
			i++;
		}while(a>1);
		b[i]=a;
		for(j=i;j>-1;j--)
		{
			if(b[j]!=0||j!=i)
			{
				printf("%d",b[j]);
			}	
		}
		printf("\n");
	}
	return 0;
}
