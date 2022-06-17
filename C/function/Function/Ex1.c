
#include<stdio.h>   //標頭檔
int year(int x); //宣告副函式

int main()  //主函式
{
    int wy, my; //宣告變數
    printf("請輸入出生年分(民國):"); //印出文字
    scanf("%d",&my);    //提取輸入的變數
    wy = year(my);  //wy令為副函式回傳值
    printf("您出生於西元%d年",wy); //印出文字

    return 0;   //回傳值0
}
int year(int x) //year函式
{
    return x+1911;  //回傳x+1911
}
