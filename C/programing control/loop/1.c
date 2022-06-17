#include<stdio.h> //標頭檔

int main() //主函式
{
    int user,c; //宣告user c 整數變數
    printf("Enter an integer:"); //印出 Enter...
    scanf("%d",&user); //提取輸入的變數並令其為user
    for(c = 1;c <= 10;c++) //設定迴圈起始值 1 結束值 c <=10 遞增值c+1
    {
        printf("%d * %d = %d\n",user,c,user*c); //印出 user*c = X 並換行
    }
    return 0; //回傳值0
}
