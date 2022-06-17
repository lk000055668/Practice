#include<stdio.h>   //標頭檔

float calavg (float arr[],float avg);   //宣告原型

int main()  //主函式
{
    float x[5]={65,70,75,80,85}, avg;   //宣告變數 陣列
    avg = calavg(x,avg);
    printf("The average is %.2f",avg);  //印出文字
    return 0;   //回傳值0
}

float calavg(float num[],float avg) //副函式
{
    for(int i=0;i<5;++i)    //for loop
    {
        printf("A number to num[%d]:%.0f\n",i+1,num[i]);    //印出文字
        avg = avg + num[i];
    }
    avg = avg/5;
    return avg; //回傳avg
}
