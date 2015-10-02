#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main(){
    int i=21474;
    printf("%d\n",i);
    double d=3.14159;
    printf("%.2lf\n",d);//.2代表精準到到小數點後第2位
    char arr[11]="i lova C++";
    printf("%s",arr);
    //以下為輸入
    scanf("%d",&i);
    printf("now i is %d\n",i);
    scanf("%lf",&d);
    printf("now d is %lf",d);//%lf跟%f的預設精準度，是到第六位
    scanf("%s",arr);//scanf("%s")的空格就會停止
    //所以只能輸入不含空格的字串
    printf("now arr is %s",arr);
	return 0;
}
