#include<stdio.h> //標頭檔


int main() //主函式
{
    int c,q1,q2,q3; //宣告c q1 q2 q3 整數變數
    double avg,income; //宣告avg income 浮點數變數
    c = 0; //將c賦予成0

    while(c != 3 ){ // c不等於3時 執行迴圈
        printf("請輸入第一期收入:\n"); //印出對應文字
        scanf("%d",&q1); //提取輸入變數 並令其為q1值
        ++c; //c加一
        printf("請輸入第二期收入:\n"); //印出對應文字
        scanf("%d",&q2); //提取輸入變數 並令其為q2值
        ++c; //c加一
        printf("請輸入第三期收入:\n"); //印出對應文字
        scanf("%d",&q3); //提取輸入變數 並令其為q3值
        ++c; //c加一
    }
    income = q1 + q2 + q3; //將income賦予為 q1+q2+q3
    avg = income / 3; // 將avg賦予成income/3
    printf("總收入為%.lf\n",income); //印出對應文字
    printf("平均收入為%.lf",avg); //印出對應文字

    return 0;//回傳值0
}
