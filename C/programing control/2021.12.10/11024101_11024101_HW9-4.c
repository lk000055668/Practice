#include<stdio.h>      //標頭檔

int main()      //主函式
{
    float sum,num[5];       //宣告變數 陣列

    for(int i=0;i<=4;++i)       //i<=4?
    {
        printf("Input a number to num[%d]:",i+1);   //印出input...
        scanf("%f",&num[i]);        //提取輸入變數 並另為陣列中的值
        sum = sum + num[i];         //sum +num[i]賦予給sum
    }
    printf("The average is %.2f",sum/5);        //印出the average
    return 0;       //回傳值0
}
