#include<stdio.h>       //標頭檔
float vol (float x);        //宣告函式原形
float flow (float y);       //宣告函式原形
int main()      //主函式
{
    float conclu,func,user;     //宣告變數
    printf("GB轉TB請按1\n");       //印出文字
    printf("Mbps轉MB/s請按2\n");       //印出文字
    printf("請選擇要轉換的資訊單位:\n");       //印出文字
    scanf("%f",&func);      //提取輸入
    printf("請輸入的轉換的數值\n");      //印出文字
    scanf("%f",&user);      //提取輸入
    if(func == 1 )      //func=1?
    {
        conclu = vol(user);     //呼叫副函式
        printf("%.0fGB為%.2f TB",user,conclu);//印出文字
    }
    else
    {
        conclu = flow(user);        //呼叫副函式
        printf("%.0fMbps為%.2fMB/s",user,conclu);        //印出文字
    }
     return 0;      //回傳值0
}

float vol (float x)     //副函式
{
    return x/1024;      //回傳x/1024
}

float flow (float y)        //副函式
{
    return y*0.125;     //回傳y*0.125
}
