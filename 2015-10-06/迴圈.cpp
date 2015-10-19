#include<iostream>
#include<stdio.h>

using namespace std;
int fab(int num);
//函式：會宣告函式的回傳值 函式名稱 及函式的參數
//函式真正的定義會再最下方
int main(){
	for(int i=1;i<=9;++i){
		//for()裏面和if一樣,需要判斷式為true才會繼續執行
		//上面代表從1開始,每次都會檢查是不是有<=9,若有則執行回圈裡的程式
		//執行完再執行++i,也就是i=i+1的縮寫
		printf("%d\n",i);
	}
	int result=fab(10);
	if(result<0){
		printf("error");
	}
	else{
		printf("Result : %d",result);
	}
	return 0;
}
int fab(int num){
	//函式真正的定義,因為有宣告函式為int型態
	//所以就要回傳一個int的值,語法為return
	if(num>0){
		return fab(num-1)*num;
	}
	else if(num==1||num==0){
		return 1;
	}
	else return -1;
}
