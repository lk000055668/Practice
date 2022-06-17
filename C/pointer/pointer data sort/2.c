#include<stdio.h>   //標頭檔
#define SIZE 5



int main()      //主函式
{
    int a[SIZE], x;     //宣告變數
    int *aptr = a;      //宣告指標
    printf("請輸入5 numbers:\n");      //印出文字
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);     //提取輸入

    printf("印出陣列data[5]:[%d,%d,%d,%d,%d]\n",*aptr,*(aptr+1),*(aptr+2),*(aptr+3),*(aptr+4));     //印出文字
    printf("\n請輸入你想要家的數字:\n");      //印出文字
    scanf("%d",&x);//提取輸入

    //每項增加x
    for(int i=0; i<SIZE; ++i)
        *(a+i) += x ;
    printf("印出陣列data[5]:[%d,%d,%d,%d,%d]\n",*aptr,*(aptr+1),*(aptr+2),*(aptr+3),*(aptr+4));//印出文字

    return 0;
}

