#include<stdio.h>       //標頭檔

int main()      //主函式
{
    int f[6],q[6],total;        //宣告兩陣列total變數

    printf("請輸入6種水果分別的價格:\n");      //印出請輸入...
    scanf("%d %d %d %d %d %d",&f[0],&f[1],&f[2],&f[3],&f[4],&f[5]);     //提取輸入的變數並依序另為f陣列的值
    printf("請輸入6種水果分別購買的數量:\n");        //印出請輸入...
    scanf("%d %d %d %d %d %d",&q[0],&q[1],&q[2],&q[3],&q[4],&q[5]);     //提取輸入的變數 並依序另為q陣列中的值

    for(int i=0;i<=5;++i)       //i<=5?
    {
        total = total + f[i] * q[i];    //total + f[i] * q[i] 賦予給total
    }
    printf("總價格為%d",total);         //印出總價格
    return 0; //回傳值0
}
