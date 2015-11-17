#include <iostream>
#include <cstring>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int array[50]={};
	int Alarr[50]={};
	int num=0;
	while(scanf("%d",&num)!=EOF){
		for(int i=0;i<num;++i){
			scanf("%d",&array[i]);
		}
		for(int i;i<num;++i){
			printf("%d\n",array[i]);
		}
		printf("=================\n");
		//selection sort

		for(int i=0;i<num;++i){
			int min=i;
			for(int j=i+1;j<num;++j){
				if(array[j]<array[min]){
					min=j;
				}
			}
			swap(array[min],array[i]);
		}

		for(int i=0;i<num;++i){
			printf("%d\n",array[i]);
		}
		printf("=================\n");
		printf("請輸入%d個數字",num);
		for(int i=0;i<num;++i){
			scanf("%d",&Alarr[i]);
		}
		sort(Alarr,Alarr+num);//從第一位排到最後一位+1
		for(int i=0;i<num;++i){
			printf("%d\n",Alarr[i]);
		}
	}
	return 0;
}
