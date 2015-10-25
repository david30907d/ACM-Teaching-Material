#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) 
{
	int a,i;
	while(scanf("%d",&a)!=EOF)
	{
		int h=0;
		for(i=2;i<=sqrt(a);i++)
		{
			int k=0;
			if(a%i==0) h++;
			while(a%i==0)
			{
				a=a/i;
				k++;
			}
			if(h==1)
			{
				if(k==1) printf("%d ",i);
				else if(k>1) printf("%d^%d ",i,k);	
			}
			else
			{
				if(k==1) printf("* %d ",i);
				else if(k>1) printf("* %d^%d ",i,k);
			}
			
		}
		if(a!=1&&h!=0) printf("* %d\n",a);
		else if(a!=1&&h==0) printf("%d\n",a);
		else printf("\n");
	}

	return 0;
}
