#include<stdio.h>   //標頭檔
int main()  //主函式
{
    static char x[] = {'A','B','C','D','E','F','G','H','I','J'};    //宣告靜態陣列
    for(int i=0;i<10;++i)
    {
        printf("%c",x[i]);  //印出文字
        printf(" %d\n",i);  //印出文字
    }
    return 0;   //回傳值0
}

