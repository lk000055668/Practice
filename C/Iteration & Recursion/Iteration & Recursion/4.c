#include<stdio.h>   //標頭檔
int cal(int x, int y);      //宣告函式原形

int main()      //主函式
{
    int x,y;        //宣告變數
    printf("輸入兩數：");        //印出文字
    scanf("%d %d",&x,&y);       //提取輸入
    printf("GCD:%d",cal(x,y));      //印出文字
    return 0;       //提取輸入
}

int cal(int x,int y)        //副函式
{

   if (y == 0)      //y=0?
        return x;   //回傳x
    else
        return cal(y,x%y);      //回傳cal(y,x%y)
}
