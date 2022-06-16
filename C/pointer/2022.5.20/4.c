#include<stdio.h>       //標頭檔
#include<stdlib.h>      //標頭檔
#include<time.h>        //標頭檔
void jud(int*a,int*b);      //定義原型

int main()      //主函式
{
    int x,y;        //宣告變數
    srand(NULL);        //亂數種子碼
    y = rand() % 12 + 1;

    printf("請輸入這次骰子點數為(1)大或(2)小:");//印出文字
    scanf("%d",&x); //提取輸入

    jud(&x,&y); //函式呼叫
    return 0;
}

void jud(int*a,int*b)
{
    //猜大
    if(*a == 1){
        //數值小
        if(*b<7)
            printf("你輸了! 數值總和為：%d",*b);
        //數值大
        else{
            printf("你贏了! 數值總和為：%d",*b);
        }
    }
    //猜小
    else{
        //數值小
        if(*b<7)
            printf("你贏了! 數值總和為：%d",*b);
        //數值大
        else{
            printf("你輸了! 數值總和為：%d",*b);
        }
    }
}
