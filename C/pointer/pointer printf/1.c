#include<stdio.h>   //標頭檔
int main()     //主函式
{
    float ab;       //宣告變數
    float *abptr;       //宣告指標

    printf("Enter the value of ab :");      //印出文字
    scanf("%f",&ab);        //提取輸入

    printf("The value of ab is %f\n", ab);      //印出文字
    printf("The address of ab is %p\n", &ab);   //印出文字
    abptr = &ab;
    printf("The pointer to float of abptr is %f\n",*abptr);     //印出文字
    printf("The address of abptr is %p",abptr);    //印出文字

    return 0;
}
