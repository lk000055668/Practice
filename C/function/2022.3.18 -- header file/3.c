#include<stdio.h>       //標頭檔
#include"three.h"     //標頭檔

int main()      //主函式
{
    float h,w;      //宣告變數
    printf("請輸入身高(公尺):");   //印出文字
    scanf("%f",&h);     //提取輸入
    printf("請輸入體重(公斤):");   //印出文字
    scanf("%f",&w);     //提取輸入
    printf("您的BMI為:%.2f",cal(h,w));     //印出文字

    return 0;     //回傳值0
}
