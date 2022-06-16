#include<stdio.h> /*標頭檔*/

int main() /*主函式*/
{
    int x,y;                           /*宣告變數 x,y*/
    printf("請輸入A與B的值:");         /*印出"請輸入A與B的值:"*/
    scanf("%d %d",&x,&y);              /*提取輸入的變數 並依序令其為x,y值*/


    if(x>y) /*若x>y*/
    {
        printf("%d>%d\n",x,y);         /*印出"(x值)>(y值)*/
        printf("A比B大");              /*印出"A比B大*/
    }

    if(x<y) /*若x<y*/
    {
        printf("%d<%d\n",x,y);        /*印出"(x值)<(y值)"*/
        printf("A比B小");             /*印出"A比B小"*/
    }

    if(x==y) /*若x=y*/
    {
        printf("%d=%d\n",x,y);       /*印出(x值)=(y值)*/
        printf("AB一樣大");          /*印出"AB一樣大"*/
    }

    return 0; /*回傳值0*/
}
