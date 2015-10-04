#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{

	char a[1000];
	while(scanf("%s",&a)!=EOF)
	{
		int l,i,k=0;
		l=strlen(a);
		for(i=0;i<l/2;i++)
		{
			if(a[i]!=a[l-1-i])
			{
				k++;
				break;
			}
		}
		if(k!=0)
		{
			printf("no\n");
		}
		else
		{
			printf("yes\n");
		}
		
	}
	return 0;
}
