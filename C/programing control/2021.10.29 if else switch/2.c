#include<stdio.h> /*標頭檔*/

int main() /*主函式*/
{
    int b,c,all; /*宣告b,c,all 三個整數變數*/
    printf("服飾:"); /*印出 "服飾:"*/
    scanf("%d",&c); /*提取輸入的變數 並令其為c值*/
    printf("床組:");/*印出"床組:"*/
    scanf("%d",&b); /*提取輸入的變數 並令其為b值*/
    all = c + b; /*將all 賦予為c+b*/
    printf("總金額:%d\n",all); /*印出總金額: 並換行*/

    if (all < 3000) /*若all<3000*/
    {
        printf("未打折\n"); /*印出 未打折 並換行*/
        printf("應付:%d元",all); /*印出 "應付: 元"並換行*/
    }
    else if (all >= 3000 && all <=5999)  /*若all>=3000且all <=5999*/
    {
        all = 0.9*all;/*將all 賦予為all*0.9*/
        printf("9折優惠\n"); /*印出9折優惠 並換行*/
        printf("應付:%d元",all); /*印出 "應付: 元"*/
    }
    else if(all >= 6000) /*若all >= 6000*/
    {
        all = 0.8*all; /*將all賦予為all*0.8*/
        printf("8折優惠\n");/*印出 8折優惠 並換行*/
        printf("應付:%d元",all); /*印出 "應付: 元"*/
    }

    return 0; /*回傳值0*/
}
