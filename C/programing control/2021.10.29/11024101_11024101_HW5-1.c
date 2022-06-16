#include<stdio.h> //標頭檔

int main () //主函式
{
    char place; //宣告place為char型態變數
    printf("想安排哪種活動呢(A: 購物美食B:歷史遺跡C:沙灘 D:北國風情)\n"); //印出"想安排哪種活動呢(A: 購物美食B:歷史遺跡C:沙灘 D:北國風情)" 並換行

    scanf("%c",&place); //提取輸入的變數 並令其為place

    switch (place){ //判斷place變數
        case 'A': //若place為A
            printf("行程:京都、大阪"); //印出 行程:京都、大阪
            break; //結束switch循環
        case 'B': //若place為B
            printf("行程:福岡、熊本"); //印出 行程:福岡、熊本
            break;//結束switch循環
        case 'C'://若place為C
            printf("行程:沖繩");//印出 行程:沖繩
            break;//結束switch循環
        case 'D'://結束switch循環
            printf("行程:北海道");//印出 行程:北海道
        default: //若以上都不為真
            printf("輸入錯誤"); //印出 輸入錯誤
            break;//結束switch循環
    }

    return 0; //回傳值0
}
