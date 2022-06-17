#include<stdio.h>       //標頭檔
int sum(int x);     //宣告副函式
int main()  //主函式
{
    int x;  //宣告變數
    printf("Enter a number:");   //印出文字
    scanf("%d",&x);     //提取輸入
    printf("1*2+2*3+3*4+…+(n-1)*n=%d",sum(x));  //印出文字

    return 0;       //回傳值0
}
int sum (int x)     //副函式
{
    if(x==1)       //x=1?
        return 0;   //回傳0
    else
        return sum(x-1)+x*(x-1);    //回傳sum(x-1)+x*(x-1)
}

