#include<stdio.h> //標頭檔

int main() //主函式
{
    int total,u,c,m;                   //宣告 total u c m整數變數

    printf("請輸入總共要計算幾期:\n"); //印出 請輸入總共要計算幾期: 並換行
    scanf("%d",&u);                    //提取輸入的變數 並令其為u
    c = 0; //賦予c為0
    for(c=1;c<=u;c++){                 //設定for迴圈 初始值c=1 結束值c<=u 遞增值為1
        printf("請輸入第%d期收入:",c); // 印出 請輸入第X期收入;
        scanf("%d",&m);                //提取輸入的變數並令其為m
        total = total + m;             //賦予total=total+m
        printf("請輸入第%d期支出:",c); // 印出 請輸入第X期支出;
        scanf("%d",&m);                //提取輸入的變數並令其為m
        total = total - m;             //賦予total=total-m
    }
    printf("總餘額為%d",total);        //印出 總餘額為
    return 0; //回傳值0
}
