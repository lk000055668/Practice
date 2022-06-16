#include<stdio.h> //標頭檔
#include<time.h> //標頭檔
#include<stdlib.h> //標頭檔

int main() //主函式
{
    int num,con,de,choice; //宣告 num con de choice整數變數
    double h; //宣告h 浮點數變數
    char fun; //宣告fun字串變數
    srand(time(NULL)); //設定亂數種子碼


    do
    {
        printf("請輸入(A:新增會員 B:加值)\n"); //印出 請輸入...並換行
        scanf(" %c",&fun); //提取輸入的變數並令其為fun
        if(fun == 'A') //fun = A?
        {
            num = rand() %100 + 1; //將1-100的亂數賦予給num
            printf("歡迎加入\n"); //印出歡迎加入並換行
            printf("您的會員序號為%d\n",num); //印出您的... 並換行
            if(num % 2 == 0) //num % 2 = 0?
                printf("您所在的組別為乙組\n"); //印出你所在...並換行
            else //若敘述不為真
                printf("您所在的組別為甲組\n");//印出你所在...並換行
        }
        else //若敘述不為真
        {
            printf("歡迎使用加值系統\n"); //印出歡迎...並換行
            printf("您目前的餘額為%d元\n",con); //印出您目前... 並換行
            printf("請輸入要加值的金額\n"); //印出 請輸入...並換行
            scanf("%d",&de); //提取輸入的變數並令其為de
            printf("加值%d元\n",de);//印出加值...並換行
            h = de * 0.05; //de*0.05賦予給h
            de = de -h; //de-h賦予給de
            printf("須扣手續費%.lf元\n",h); //印出須扣...並換行
            printf("實際加值%d元\n",de); //印出實際...並換行
            con = con + de; //con + de 賦予給 con
            printf("加值後的金額為%d元\n",con); //印出加值後...並換行
        }
        printf("謝謝您使用本系統，是否還需要繼續使用？ 否(0)、是 (1):"); //印出謝謝...並換行
        scanf("%d",&choice); //提取輸入的變數並令其為choice
    }while(choice == 1); //choice =1?
    printf("謝謝您使用本系統， 很高興能為您服務，再見!"); //印出謝謝...並換行
    return 0; //回傳值0
}
