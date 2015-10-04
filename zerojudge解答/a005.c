#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int a[4],t;
	
	while(scanf("%d",&t)!=EOF)
	{
		while(t!=0)
		{
			t--;
			scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
			if(a[1]-a[0]==a[3]-a[2])
			{
				printf("%d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[3]*2-a[2]);
			}
			else
			{
				printf("%d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[3]*a[3]/a[2]);
			}
		}
		
	}
	return 0;
}

