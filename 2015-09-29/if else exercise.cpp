#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main(){
    int input=0;
    scanf("%d",&input);
    if(input%2==0){
        printf("input is even\n");
    }
    else if(input%3==0){
        printf("input is the mutiple of 3\n");
    }
    if(input%3==0 && input%2==0){
        printf("input is the mutiple of 6\n");
    }
    else{
        printf("input is a number XDD\n");
    }
	return 0;
}
