#include"four.h"      //標頭檔
#include<stdio.h>       //標頭檔


int main()      //主函式
{
    int x;  //宣告變數
    srand(time(NULL));  //亂數種子碼
    x = rand() % 100 + 1;   //亂數
    printf("歡迎加入會員\n");     //印出文字
    printf("您的會員序號為%d\n",x);    //印出文字
    sortg( x);  //呼叫函式

    return 0;   //回傳值0
}
