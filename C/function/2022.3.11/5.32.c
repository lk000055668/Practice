#include<stdio.h>   //標頭檔
#include<stdlib.h>  //標頭檔
void f_1(float x,float y);  //宣告副函式
void f_2(float x,float y);  //宣告副函式
void f_3(float x,float y);  //宣告副函式

int main()  //主函式
{
    float x,y;  //宣告變數
    int c;  //宣告變數
    printf("請輸入數字X:");  //印出文字
    scanf("%f",&x);     //提取輸入
    printf("請輸入數字Y:");  //印出文字
    scanf("%f",&y);     //提取輸入
    printf("選擇1.三乘X加二乘Y\n");    //印出文字
    printf("選擇2.X平方減Y平方\n");    //印出文字
    printf("選擇3.X除Y\n");    //印出文字
    printf("執行函式代碼?");  //印出文字
    scanf("%d",&c);     //提取輸入
    if(c == 1)      //c=1?
        f_1(x,y);   //呼叫f_1
    else if (c == 2)    //c=2?
        f_2(x,y);   //呼叫f_2
    else    //否則
        f_3(x,y);   //呼叫f_3

    return 0;   //回傳值0
}

void f_1(float x,float y)   //副函式
{
    printf("函式執行結果%.1f",3*x+2*y);   //印出文字
}

void f_2(float x,float y)   //副函式
{
    float a;    //宣告變數
    a = pow(x,2) - pow(y,2);    //a = x^2-y^2
    printf("函式執行結果%.1f",a);     //副函式
}

void f_3(float x,float y)   //副函式
{
    printf("函式執行結果%.3f",x/y);       //副函式
}
