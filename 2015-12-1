#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	long long int x,i;
	while(scanf("%lld",&x)!=EOF){
		if(x==0){
			printf("0\n");
		}
		else{
			for(i=1;i<=2147483647;i++){
				x=x-i;
				if(x<=0){
					break;
				}
			}
			printf("%lld\n",i);
		}
	}
	return 0;
}
