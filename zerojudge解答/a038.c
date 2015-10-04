#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char a[1000];
	while(scanf("%s",&a)!=EOF)
	{
		int i,l,h=0,b[1000];
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			b[i]=a[i]-'0';
		}
		for(i=l-1;i>-1;i--)
		{
			if(b[i]!=0||h!=0)
			{
				printf("%d",b[i]);
				h=1;
			}
			
		}
		if(h==0)
		{
			printf("0");
		}
		printf("\n");
	}
	return 0;
}

