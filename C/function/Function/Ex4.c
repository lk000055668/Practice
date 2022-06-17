#include<stdio.h>   //標頭檔
#include<math.h>    //標頭檔
void cal(int x);    //宣告副函式

int main()      //主函式
{
    for(int i=1;i<11;++i)   //迴圈
    {
        cal(i);     //呼叫副函式
    }
    return 0;   //回傳值0
}

void cal (int i)    //副函式
{
    int e;      //宣告變數
    e = pow(i,2);       //利用pow函式計算值賦予給e
    printf("%d的次方為%d\n",i,e);       //印出文字
}
//pow(底數,次方)
