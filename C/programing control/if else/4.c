#include<stdio.h> /*標頭檔*/

int main() /*主函式*/
{
    int year; /*宣告year為整數變數*/
    printf("請輸入西元年分:"); /*印出"請輸入西元年分:"*/
    scanf("%d",&year);  /*提取輸入的變數 並令其為year值*/

    if( year % 4 == 0) /*若year除4的餘數是為零*/
        {
            if( year % 100 != 0 ) /*若year除100的餘數不等於0*/
                printf("該年為閏年"); /*印出"該年為閏年"*/
            else if( year % 400 == 0 ) /*若year除400的餘數等於0*/
                printf("該年為閏年"); /*印出"該年為閏年"*/
            else /*若year除100的餘數不等於零 該敘述不為真*/
                printf("該年為平年"); /*印出"該年為平年"*/
        }
    else /*若year除4的餘數是為零 該敘述不為真*/
        printf("該年為平年"); /*印出"該年為平年"*/


    return 0; /*回傳值0*/
}

