#include<stdio.h>       //標頭檔

int main()      //主函式
{
    float num[5];       //宣告陣列
    float maxnum=0;     //宣告小數變數

    printf("請輸入5組數值:\n");       //印出請輸入..
    scanf("%f %f %f %f %f",&num[0],&num[1],&num[2],&num[3],&num[4]);        //提取輸入的值並依序另為陣列中的值
    printf("您輸入的數值為:\n");       //印出您輸入...
    printf("%.1f %.1f %.1f %.1f %.1f",num[0],num[1],num[2],num[3],num[4]);      //印出對應數值

    for(int i=0;i<=4;++i) //i<=4?
    {
        if(num[i]>maxnum) //max<num[i]?
            maxnum = num[i]; //陣列中的值賦予給maxnum
    }
    printf("\n您輸入的最大數值為%.1f",maxnum);       //印出您輸入...

    return 0;       //回傳值0
}
