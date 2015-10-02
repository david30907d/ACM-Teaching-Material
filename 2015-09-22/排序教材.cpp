#include <iostream>
#include <cstring>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){	
	int array[10]={};
	int Alarr[10]={};
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
			int max=i;
			for(int j=i+1;j<num;++j){
				if(array[max]>array[j]){
					max=j;					
				}				
			}
			swap(array[max],array[i]);
		}
		 
		for(int i=0;i<num;++i){
			printf("%d\n",array[i]);
		}
		printf("=================\n");
		printf("請輸入num個數字");
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
