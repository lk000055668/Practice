#include<stdio.h>   //標頭檔
#include<math.h>    //標頭檔
#include<stdlib.h>  //標頭檔
void t(float x);    //宣告副函式
void e(float x);    //宣告副函式

int main()  //主函式
{
    float user,f;   //宣告變數
    printf("請輸入想計算的數字:\n");     //印出文字
    scanf("%f",&user);  //提取輸入的變數並另為user值
    printf("選擇想使用的功能:\n");  //印出文字
    printf("1.計算sin的正弦與cos的餘弦\n");  //印出文字
    printf("2.計算log與log10\n");  //印出文字
    scanf("%f",&f); ////提取輸入的變數並另為f值
    printf("計算結果為:\n");     //印出文字

    if( f == 1 )    //f=1?
    {
        t(user);
    }
    else    // f != 1
    {
        e(user);
    }
    return 0;   //回傳值0
}

void t( float x )   //副函式
{
    printf("%.6f 的正弦是 %.6f 度\n",x,sin(x*3.1415926/180));    //印出文字
    printf("%.6f 的餘弦是 %.6f 度",x,cos(x*3.1415926/180));      //印出文字
}

void e( float x )   //副函式
{
    printf("log(%.6f) = %.6f\n",x,log(x));  //印出文字
    printf("log10(%.6f) = %.6f",x,log10(x));    //印出文字
}
