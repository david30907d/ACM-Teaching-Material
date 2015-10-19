#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main(){
    int input=0;
    //int 是宣告型態
    scanf("%d",&input);
    //scanf是從鍵盤輸入，%d代表要輸入十進位的數
    //&input代表是要輸入到input這個變數


    //if() else if(),這類的語法，需要小括號裡頭的判斷式是true,才會執行裏面的程式
    //但是if 、else if 、else這些都是只會執行某一個，不可能都執行，若前面所有定義的條件都不符合就會執行else
    if(input%2==0){
        //input %2  == 0 代表可以被二所整除，%代表除已某個數後所剩下的餘數
        //所以若於零代表是二的倍數
        printf("input is even\n");
    }
    else if(input%3==0){
        printf("input is the mutiple of 3\n");
    }
    if(input%3==0 && input%2==0){
        //&&代表and,要左邊跟右邊的條件都達成才會去執行內部程式，所以就是六的倍數
        printf("input is the mutiple of 6\n");
    }
    else{
        printf("input is a number XDD\n");
    }
	return 0;
}




