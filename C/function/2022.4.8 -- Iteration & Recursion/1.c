#include<stdlib.h>      //標頭檔
#include<stdio.h>       //標頭檔
#include<time.h>        //標頭檔
#include "one.h"      //標頭檔
void bsort(int x[]);    //宣告函式原形

int main()      //主函式
{
    int arr[10]={0};     //宣告陣列
    srand(time(NULL));      //亂數種子碼
    printf("10位學生的成績：\n");      //印出文字
    for(int i=0;i<=10;++i)      //for loop
    {
        arr[i] = rand() %100 + 1;   //將陣列中給予各項亂數
        printf("%d ",arr[i]);   //印出文字
    }

    bsort(arr);     //副函式
    as(arr);        //副函式
    return 0;           //回傳值0
}

void bsort (int x[])
{
    //bubble sort
    for(int i=0;i<=10;++i)
    {
        for(int j=0;j<i;++j)
        {
            if(x[j] >x[i])
            {
                int temp = x[j];
                x[j]=x[i];
                x[i]=temp;
            }
        }
    }
    printf("\n排序後：\n");     //印出文字
    for(int i=0;i<=10;++i)
        printf("%d ",x[i]);     //印出文字
}
