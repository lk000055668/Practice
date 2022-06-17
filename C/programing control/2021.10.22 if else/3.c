#include <stdio.h> /*標頭檔*/

int main() /*主函式*/
{
    double h,BMI; /*宣告h,BMI兩個小數變數*/
    int w; /*宣告w為整數變數*/

    printf("請輸入身高(公尺):"); /*印出"請輸入身高(公尺):"*/
    scanf("%lf",&h); /*提取輸入的數值 並令其為h*/
    printf("請輸入體重(公斤):"); /*印出"請輸入體重(公斤):"*/
    scanf("%d",&w); /*提取輸入的變數 並令其為w*/
    BMI= w/(h*h); /*將BMI另為 w/(h*h)*/
    printf("您的BMI為:%.2f\n",BMI); /*印出BMI值(顯示到小數點第二位)*/

    if(BMI < 18.5) /*若BMI 小於 18.5*/
        printf("您的體重過輕"); /*印出"您的體重過輕"*/
    else if (24 > BMI && BMI >= 18.5) /*若18.5≦BMI< 24*/
        printf("您的體重為正常範圍"); /*印出"您的體重在正常範圍*/
    else if (BMI < 27 && BMI >= 24 ) /*若 24≦BMI< 27*/
        printf("您的體重過胖"); /*印出"您的體重過胖"*/
    else if (BMI>=27) /*若BMI 大於等於 27*/
        printf("您的體重肥胖"); /*印出"您的體重肥胖"*/

    return 0; /*回傳值0*/
}
