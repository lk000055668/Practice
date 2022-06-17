#include<stdio.h> //標頭檔
#include<stdlib.h> //標頭檔
#include<time.h>  //標頭檔

int main() //主函式
{
    srand(time(NULL)); //設定亂數種子碼

    int D,ins,x,d; //宣告D ins  x d整數變數
    d = 1;  //賦予1給d
    printf("請輸入需求量(300~800箱):"); //印出 請輸入需求量(300~800箱):
    scanf("%d",&D); //提取輸入的變數 並令其為D

    while(ins <= D) //當ins <=D時 執行迴圈
    {
        x = rand() % 200 + 1; //將x另為 1~200的變數
        printf("第%d天 生產%d箱\n",d,x); //印出 第X天 生產X箱 並換行
        ins = ins + x; // 將x值加入給ins
        printf("目前共%d箱\n",ins); //印出目前共X箱 並換行
        d++;
    }
    printf("符合目前需求量\n"); //印出 符合目前需求量 並換行
    printf("庫存尚有%d箱",ins-D); //印出庫存尚有(顯示ins-D)箱
}
