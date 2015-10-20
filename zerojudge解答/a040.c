#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		int i,j,k,i2,judge=0;
		for(i=a;i<=b;i++)
		{
			int h=0,sum=0;
			for(j=1;i/j!=0;j*=10)
			{
				h++;
			}
			i2=i;
			for(j=0;j<h;j++)
			{
				k=pow(10,h-1-j);
				sum+=pow(i2/k,h);
				i2=i2%k;
			}
			if(sum==i)
			{
				printf("%d ",i);
				judge=1;
			}
		}
		if(judge!=1)
		{
			printf("none");
		}
		printf("\n");
	}
	return 0;
}
