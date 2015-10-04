#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int a,b,s;
	
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		s=(a*2+b)%3;
		switch(s)
		{
			case 0:printf("´¶³q\n");
			break;
			case 1:printf("¦N\n");
			break;
			case 2:printf("¤j¦N\n");
			break;
		}
		
	}
	return 0;
}
