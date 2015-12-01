#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char a1[4],test1[5]="0000";
	char a4[4],test2[5]="0000";
	int a2,a3,b1,b2,c1=0,c2=0;
	
	while(scanf("%d%d%d%d",&a4[0],&a4[1],&a4[2],&a4[3])!=EOF){
		
		scanf("%d",&a2);
		for(a3=1;a3<=a2;a3++){
			scanf("%d%d%d%d",&a1[0],&a1[1],&a1[2],&a1[3]);
			for(b1=0;b1<4;b1++){
				if(a1[b1]==a4[b1]){
					c1++;
					test1[b1]=1;
					test2[b1]=1;
					
				}
								
			}
			for(b1=0;b1<4;b1++){
				for(b2=0;b2<4;b2++){
					if(a4[b1]==a1[b2] && test1[b1]!=1 && test2[b2]!=1 ){
						c2++;
						test1[b1]=1;
						test2[b2]=1;
					}
				}
			}
			printf("%dA%dB\n",c1,c2);
			c1=0;
			c2=0;
			for(b1=0;b1<=4;b1++){
				test1[b1]=0;
				test2[b1]=0;
			}
		}
		
	}
	return 0;
}
