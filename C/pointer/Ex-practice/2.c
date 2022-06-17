#include<stdio.h>       //標頭檔
void temperature(float*x);      //定義原型

int main()      //主函式
{
    float a;    //宣告變數
    printf("請輸入華氏溫度:");     //印出文字
    scanf("%f", &a);        //提取輸入
    temperature(&a);        //函式呼叫
    printf("攝氏溫度為:%f",a);       //印出文字

    return 0;
}

void temperature(float*x)
{
    *x = (*x-32)*5/9;
}
