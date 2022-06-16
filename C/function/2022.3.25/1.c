#include<stdio.h>   //標頭檔
float f_max(float arr[],float x);   //宣告原型
int main()  //主函式
{
    float max=0;    //宣告變數
    float x[5]={2.97,5.31,8.46,6.33,5.18};  //宣告陣列
    printf("5組數值:\n");  //印出文字
    for(int i=0;i<5;++i)    //for loop
    {
        printf("%.2f  ",x[i]);  //印出文字
    }
    max = f_max(x,max);
    printf("\n\n最大數值為%.2f",max);    //印出文字
    return 0;   //回傳值0
}

float f_max (float arr[],float max)     //副函式
{
    for(int i=0;i<5;++i)    //for loop
    {
        if(max<arr[i])  //max<arr[i]?
        max = arr[i];
    }
    return max; //回傳max
}
