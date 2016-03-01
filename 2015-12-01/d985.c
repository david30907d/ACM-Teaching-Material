#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i=0, min[20], sec[20], times=0, t=0, z=0;
	int small=10000, j=0, all[20], sum=0;
	scanf("%d", &t);
	for(z=1;z<=t;++z){
		scanf("%d",×);
		Ans(times, z);
	}
	return 0;
}

void Ans(int times, int z){
	int i=0, min[20], sec[20], t=0;
	int small=10000, j=0, all[20], sum=0;
	for(i=0;i<times;i++){
		//fflush(stdin);
		scanf("%d %d", &min[i], &sec[i]);
	}
		for(i=0;i<times;i++){
			all[i]=60*min[i]+sec[i];
		}
		for(i=0;i<times;i++){
			if(all[i]<small){
				small=all[i];
				j=i;
			}
		}
		sum=all[0];
		for(i=1;i<times;i++){
			sum=sum+all[i];
		}
		sum=sum/times;
		printf("Track %d:\n", z);
		printf("Best Lap: %d minute(s) %d second(s).\n", all[j]/60, all[j]%60);
		printf("Average: %d minute(s) %d second(s).\n", sum/60, sum%60);
}
