#include<stdio.h>   //標頭檔
#include<stdlib.h>  //標頭檔
int get_int(void);  //宣告副函式
int trans(int x);   //宣告副函式

int main()  //主函式
{
    int u;  //宣告變數
    u = get_int();  //u =副函式回傳值
    trans(u);   //呼叫變數trans
    return 0;   //回傳值0
}

int get_int(void)   //副函式
{
    int user;   //宣告變數
    printf("請輸入鞋子尺寸(cm):"); //印出文字
    scanf("%d",&user);  //提取輸入的變數
    return user;    //回傳user值
}

int trans(int user) //副函式
{
    int e;  //宣告變數
    e = (user+1.5)*3/2; //(user+1.5)*3/2
    printf("%d公分轉換成歐洲尺寸為:%d",user,e);   //印出文字

}
