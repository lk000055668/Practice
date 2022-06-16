#include<stdio.h> //標頭檔

int main() //主函式
{
    int stop,choice,total,meal; //宣告stop choice total meal 整數變數

    do
    {
        printf("中原食堂服務系統，您好!\n"); //印出 中原...
        printf("您可以選(1)中式、(2)美式 請輸入您的選擇:"); //印出您可以選...
        scanf("%d",&choice); //提取輸入的變數 並另其為choice
        if (choice == 2 ) //若choice = 2
        {
            printf("您選了美式\n"); //印出您選擇..
            printf("美式有漢堡set (1)、炸雞塊set(2)、牛排set (3):\n"); //印出美式有...
            printf("請輸入您的選擇:");//印出請輸入...
            scanf("%d",&meal);//提取輸入的值並令其為meal

            if(meal == 1) //若meal = 1
            {
                printf("您選了漢堡set:\n"); //印出 您選了...
                printf("漢堡set有: 大食客漢堡、 薯條、奶昔\n"); //印出漢堡...
                printf("漢堡set是150 元\n"); //印出漢堡...
                total = total + 150; //將total加上150
                printf("總共是:%d元\n",total);//印出總共是X元

            }
            if(meal == 2) //若meal = 2
            {
                printf("您選了炸雞塊set:\n"); //印出 您選了...
                printf("炸雞塊set有: 炸雞塊、汽水、烤番薯\n"); //印出炸雞塊...
                printf("炸雞塊set是 120 元\n"); //印出炸雞塊..
                total = total + 120; //將total加上120
                printf("總共是:%d元\n",total);//印出總共是X元

            }
            if(meal == 3) //若meal = 3
            {
                printf("您選了牛排set:\n"); //印出您選了...
                printf("牛排set有: 菲力牛排、紅茶、布丁\n");//印出牛排...
                printf("牛排set是 200 元\n");//印出牛排...
                total = total + 200;//將total加上200
                printf("總共是:%d元\n",total);//印出總共X元
            }
        }
        else //若choice不等於2
        {
            printf("您選了中式\n"); //印出您選...
            printf("中式有(1)滷味、(2)麵食、(3)飯類 請輸入您的選擇:");//印出中式有..
            scanf("%d",&meal);//提取輸入的變數並令其為meal

            if(meal == 1) //若meal = 1
            {
                printf("您選了滷味\n"); //印出您選了...
                printf("滷味有: 滷雞腿、滷豆干、海帶、雞血 \n"); //印出滷味有...
                printf("滷味是90 元\n"); //印出滷味...
                total = total + 90;//將total加上90
                printf("總共是:%d元\n",total); //印出總共是X元

            }
            if(meal == 2) //若meal = 2
            {
                printf("您選了麵食:\n"); //印出您選...
                printf("麵食有: 牛肉麵\n");//印出麵食...
                printf("麵食是 80 元\n");//印出麵食...
                total = total + 80; //將total加上80
                printf("總共是:%d元\n",total);//印出總共是x元

            }
            if(meal == 3) //若meal = 3
            {
                printf("您選了飯類:\n"); //印出您選...
                printf("飯類有: 什錦炒飯\n"); //印出飯類...
                printf("飯類是 90 元\n");//印出飯類...
                total = total + 90;//將total加上90
                printf("總共是:%d元\n",total);//印出總共是X元
            }
        }
    printf("謝謝您使用本系統，還需要繼續點嗎？否(0)、是 (1):"); //印出謝謝...
    scanf("%d",&stop);//提取輸入的變數 並令其為stop
    }
    while(stop == 1); //當stop=1時 執行迴圈

    printf("謝謝您使用本系統，很高興能為您服務，再見!"); //印出謝謝您...

    return 0; //回傳值0
}
