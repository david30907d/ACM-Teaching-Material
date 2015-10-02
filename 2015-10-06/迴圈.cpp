#include<iostream>
#include<stdio.h>

using namespace std;
int fab(int num);
int main(){
	for(int i=1;i<=9;++i){
		printf("%d\n",i);
	}
	int result=fab(10);
	if(result<0){
		printf("error");
	}
	else{
		printf("Result¡G%d",result);
	}
	return 0;	
} 
int fab(int num){
	if(num>0){
		return fab(num-1)*num;
	}
	else if(num==1||num==0){
		return 1;
	}
	else return -1;
}
