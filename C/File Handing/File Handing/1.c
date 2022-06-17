#include<stdio.h>   //標頭檔
#include<math.h>   //標頭檔
#include"one.h"   //標頭檔

int main()  //主函式
{
    int x;  //宣告變數
    printf("請輸入一個整數:"); //印出文字
    scanf("%d",&x); //提取變數
    cal(x);     //呼叫函式

    return 0;   //回傳值0
}
