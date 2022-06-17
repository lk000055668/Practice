#include<stdio.h>   //標頭檔
#include"two.h"   //標頭檔

int main()  //主函式
{
    float x, y;     //宣告變數
    printf("請輸入第一個浮點數:");   //印出文字
    scanf("%f",&x);     //提取輸入
    printf("請輸入第二個浮點數:");   //印出文字
    scanf("%f",&y);     //提取輸入
    cal(x,y);   //呼叫函式

    return 0;   //回傳值0
}
