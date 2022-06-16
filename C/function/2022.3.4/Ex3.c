#include<stdio.h>   //標頭檔
void func2(int x,int g);   //宣告副函式(無回傳值)

int main()  //主函式
{
    int t,g;    //宣告變數
    for(int i=1;i<10;++i)   //迴圈
    {
        func2(i,g);     //呼叫副函式
    }
    return 0;   //回傳值0
}

void func2(int i,int g)     //副函式
{
    g = 3*i;    //g值另為3*i
    printf("3*%d=%d\n",i,g);    //印出文字
}
