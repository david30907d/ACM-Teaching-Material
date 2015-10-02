#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main(){
	int time=0;
	scanf("%d",&time);
	char beep=7;
	for(int i=0;i<=time;++i){
		if(i%2==0){
			printf("%c",beep);
			for(int j=0;j<=199999999;j++);
		}
		else if(i%3==0){
			printf("%c",beep);
			for(int j=0;j<=399999999;j++);
		}
		else{
			printf("%c",beep);
		for(int j=0;j<=99999999;j++);
		}
		
	}	
	return 0;	
} 
