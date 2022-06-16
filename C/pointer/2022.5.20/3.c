#include<stdio.h>  //標頭檔

void euro(int*x);   //定義原型

int main()      //主函式
{
    int a,b;        //宣告變數

    printf("請輸入鞋子尺寸(cm): ");        //印出文字
    scanf("%d", &a);        //提取輸入
    b = a;
    euro(&a);   //函式呼叫
    printf("%d公分轉換成歐洲尺寸約為:%d", b, a);       //印出文字

    return 0;
}

void euro(int*x)
{
    *x = (*x +1.5)*3/2;
}
