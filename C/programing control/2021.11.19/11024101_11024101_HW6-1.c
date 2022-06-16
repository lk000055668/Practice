#include<stdio.h> //標頭檔

int main() //主函式
{
    int password,c; //宣告password c 整數變數
    printf("請輸入密碼:\n"); //印出對應文字
    scanf("%d",&password); //提取輸入的變數並令其為password值
    c=1; //將c賦予成1

    while(c != 4){ // c不等於4時 執行迴圈
       if (password != 9527){ //若password不等於9527
        printf("密碼錯誤\n"); //印出密碼錯誤 並換行
        scanf("%d",&password); //提取輸入的變數並令其為password值
        ++c; //c加一
       }
       else{ //敘述不為真
        printf("密碼正確");//印出密碼正確
        c = 4; //將c賦予成4
        }

    }


    return 0; //回傳值0
}
