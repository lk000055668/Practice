#include<stdio.h>       //標頭檔
int cal (int arr1[], int arr2[]);       //宣告原型

int main()      //標頭檔
{
    int f[6]={24,16,31,19,27,10}, total;        //宣告變數  陣列
    int p[6]={1500,2100,1400,3100,2800,1000};   //宣告陣列
    total = cal (f,p);
    printf("\n總價格為%d",total);   //印出文字
    return 0;   //回傳值0
}

int cal(int f[], int p[])   //副函式
{
    int total;  //宣告變數
    printf("6種水果分別的單位價格:\n");   //印出文字
    for(int i=0;i<6;++i)
    {
        printf("%d ",f[i]);
    }
    printf("\n6種水果分別購買的數量:\n");
    for(int i=0;i<6;++i)
    {
        printf("%d ",p[i]);
    }
    for(int i=0;i<6;++i)
        total = total + f[i]*p[i];  //計算總價格
    return total;   //回傳total
}
