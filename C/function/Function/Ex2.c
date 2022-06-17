
#include<stdio.h>   //標頭檔
float t(float x);   //宣告副函式

int main()  //主函式
{
    float tc=0,tf=0;    //宣告變數
    printf("輸入華氏溫度:");  //印出文字
    scanf("%f",&tf);    //提取輸入的值
    tc = t(tf); //將tc另為副函式t的回傳值
    printf("攝氏溫度為:%.6f",tc);    //印出文字

    return 0;   //回傳值0
}

float t(float tf)   //副函式t
{
    float y;    //宣告變數
    y = (tf-32)*5/9;    //將y另為計算的值
    return y;   //回傳y值
}
