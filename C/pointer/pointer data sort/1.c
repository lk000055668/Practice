#include<stdio.h>   //標頭檔
//主函式
int main()
{
    int a[5]={0}, b[5]={0};     //宣告陣列
    int *aptr=a, *bptr=b;       //宣告指標

    printf("請輸入A陣列的值:\n");      //印出文字
    scanf("%d %d %d %d %d",&a[0], &a[1], &a[2], &a[3], &a[4]);      //提取輸入
    printf("請輸入B陣列的值:\n");      //印出文字
    scanf("%d %d %d %d %d",&b[0], &b[1], &b[2], &b[3], &b[4]);      //提取輸入


    printf("兩陣列相加結果為:\n");  //印出文字
    for(int i=0;i<5;++i)
        printf("%d ", *(aptr+i) + *(bptr+i) );  //印出文字

    return 0;
}
