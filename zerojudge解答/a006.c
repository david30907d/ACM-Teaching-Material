#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) 
{
	int a,b,c,k;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
		k=b*b-4*a*c;
		if(k>0)
		{
			k=sqrt(k);
			printf("Two different roots x1=%d , x2=%d\n",(-b+k)/(2*a),(-b-k)/(2*a));
		}
		else if(k==0)
		{
			printf("Two same roots x=%d\n",-b/(2*a));
		}
		else
		{
			printf("No real root");
		}
	}

	return 0;
}
