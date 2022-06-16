#include<stdio.h>   //標頭檔
int main()      //主函式
{
    int num1, num2,x;   //宣告變數
    int *pn1, *pn2;     //宣告指標

    printf("輸入num1:");      //印出文字
    scanf("%d",&num1);      //提取輸入
    printf("輸入num2:");      //印出文字
    scanf("%d",&num2);      //提取輸入
    pn1 = &num1;
    pn2 = &num2;
    x = *pn1 * *pn2;
    printf("%d乘以%d等於%d對5取餘數等於%d",*pn1,*pn2,x,x%5);  //印出文字

    return 0;
}
