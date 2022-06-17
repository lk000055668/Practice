#include<stdio.h>   //標頭檔
void which(int x[]);        //宣告函式原形

int main()      //主函式
{
    int a,b,c;      //宣告變數
    printf("請輸入三邊長：\n");        //印出文字
    scanf("%d %d %d",&a,&b,&c);     //提取輸入
    int t[3] = {a,b,c};     //宣告陣列並給予數值
    //bubble sort
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (t[j] > t[i]) {
                int temp = t[j];
                t[j] = t[i];
                t[i] = temp;
                }
        }
    }
    which(t);       //副函式
    return 0;       //回傳值0
}

void which(int x[])     //副函式
{
    printf("結果顯示為：\n");     //印出文字
    if (x[0]+x[1] <= x[2] )     // x[0]+x[1] <= x[2]?
        printf("無法構成三角形(NO)");      //印出文字
    else if (x[0]*x[0] + x[1]*x[1] < x[2]*x[2])     //x[0]*x[0] + x[1]*x[1] < x[2]*x[2]?
        printf("鈍角三角形(Obtuse triangle)");       //印出文字
    else if (x[0]*x[0] + x[1]*x[1] == x[2]*x[2])    //x[0]*x[0] + x[1]*x[1] = x[2]*x[2]?
        printf("直角三角形(Right triangle)");        //印出文字
    else
        printf("銳角三角形(Acute triangle)");        //印出文字
}
