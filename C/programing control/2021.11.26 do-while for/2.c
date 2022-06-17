#include<stdio.h> //標頭檔

int main() //主函式
{
    int enter,star,f;                   //宣告enter star f 整數變數
    printf("請輸入想要的層數:");        //印出 請輸入想要的層數
    scanf("%d",&f);                     //提取輸入的變數 並令其為f
    printf("\n");                       //換行

    for(enter = f;enter >= 1;enter--)   //設定for迴圈 初始值enter等於層數 enter>=1時結束 遞增值為enter-1
    {
        for(star=1;star<=enter;star++)  //設定for迴圈 初始值star=1 star<=enter時結束 遞增值為star+1
        {
            printf("*");                //印出 *
        }
      printf("\n");  //換行
    }

    return 0; //回傳值0
}

