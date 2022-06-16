#include<stdio.h>   //標頭檔
void year(int*x);   //定義原型

int main()      //主函式
{
    int x;  //宣告變數
    printf("請輸入出生年份(民國):");     //印出文字
    scanf("%d", &x);        //提取輸入
    year(&x);       //函式呼叫
    printf("您出生於西元%d年",x);      //印出文字

    return 0;
}

void year(int *x_add)
{
    *x_add = *x_add + 1911;
}
