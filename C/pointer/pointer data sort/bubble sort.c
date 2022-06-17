#include<stdio.h>       //標頭檔
#define SIZE 5
void bubble_sort(int *ptr);     //定義函式

int main()  //主函式
{
    int a[SIZE];        //宣告陣列
    int *aptr = a;      //宣告指標
    printf("請輸入 5 個整數:\n");     //印出文字
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);     //提取輸入

    bubble_sort(aptr);      //呼叫函式
    printf("印出由小到大的排序是:\n");    //印出文字
    printf("%d %d %d %d %d",*aptr,*(aptr+1),*(aptr+2),*(aptr+3),*(aptr+4));     //印出文字
    return 0;
}

//泡沫排序
void bubble_sort(int *arr)
{
    for (int i=0; i < SIZE-1; i++)
    {
        for (int j=0; j < SIZE-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

//交換數值
void swap(int *x1, int * x2)
{
    int temp;
    temp = *x1;
    *x1 = *x2;
    *x2 = temp;
}
