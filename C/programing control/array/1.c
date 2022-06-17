#include<stdio.h>    //標頭檔

int main()      //主函式
{
    int arrq[5];        //宣告長度5的陣列
    int p;      //宣告p整數變數

    printf("請依序輸入5家廠商的交貨量:\n");         //印出 請依序...
    for(int i=1;i<=5;i++)           //i<=5?
    {
        printf("第%d家:",i);      //印出第X家
        scanf("%d",&arrq[i]);       //提取輸入的變數 另為陣列中的第i項
    }
    printf("請輸入想要查詢第幾家廠商交貨量:");         //印出 請輸入...
    scanf("%d",&p);     //提取輸入的變數並另為p
    printf("第%d家公司的交貨量為%d",p,arrq[p]);      //印出第X家...
    return 0;   //回傳值0
}
