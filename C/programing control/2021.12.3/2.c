#include<stdio.h> //標頭檔
#include<stdlib.h> //標頭檔
#include<time.h> //標頭檔

int main() //主函式
{
    int p,total,da,m; //宣告 p total da m 整數變數
    printf("請輸入你的存款目標金額(10,000元以下):\n"); //印出 請輸入... 並換行
    scanf("%d",&p); //提取輸入的變數並令為p
    srand(time(NULL)); //設定亂數種子碼
    m = 1; //m賦予為1
    while(total < p) //total < p?
    {
        da = rand() % 1001 +1000; //da 賦予1000-2000的變數
        total = total + da;//total賦予為total + da
        printf("第%d個月你存了%d元\n",m,da); //印出第X個月... 並換行
        printf("現在有%d元\n",total); //印出現在有...並換行
        ++m; //m+1
    }
    printf("恭喜你存到目標了!"); //印出恭喜...

    return 0; //回傳值0

}
