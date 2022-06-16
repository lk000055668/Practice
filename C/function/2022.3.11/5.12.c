#include<stdio.h>   //標頭檔

int get_int(void);  //宣告副函式
int find_mini(int, int);    //宣告副函式


int main()  //主函式
{
    int x,y;    //宣告變數
    x = get_int();  //副函式回傳值另為x
    y = get_int();  //副函式回傳值另為x
    printf("最小值是%d",find_mini(x,y));    //印出文字

    return 0;   //回傳值0
}

int get_int()   //副函式
{
    printf("請輸入一個整數:");     //印出文字
    int num;    //宣告變數
    scanf("%d",&num);   //提取輸入
    return num;     //回傳num
}

int find_mini(int x, int y)     //副函式
{
    if(x<y)     //x<y?
        return x;   //回傳x
    else
        return y;   //回傳y
}
