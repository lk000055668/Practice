#include<stdio.h>   //標頭檔
int fib(int);   //宣告副函式
int main()  //主函式
{
    int x;  //宣告變數
    printf("請輸入一個整數:"); //印出文字
    scanf("%d",&x); //提取輸入
    for(int i=1;i<=x;++i)   //i<=x?
        printf("fib(%d)=%d\n",i,fib(i));    //印出文字
    return 0;   //回傳值0
}
int fib(int x)  //副函式
{
    if(x==1 || x==2)    //x=1 or 2 ?
        return 1;   //回傳1
    else{
        return fib(x-1)+fib(x-2);   //回傳fib(x-1)+fib(x-2)
    }
}
