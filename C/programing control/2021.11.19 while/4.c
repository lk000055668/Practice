#include<stdio.h> //標頭檔

int main() //主函式
{
    char l; //宣告字串變數l
    int user; //宣告user整數變數
    double qu; //宣告qu浮點數變數
    user = 0; //將user賦予為0

    while(user == 0){ //c等於0時 執行迴圈
        printf("請輸入供應商等級:"); //印出對應文字
        scanf(" %c",&l);//提取輸入變數 並令其為l
        if (l == 'A') //若l等於A
        {
        printf("請輸入驗收檢查數量:");//印出對應文字
        scanf("%lf",&qu);//提取輸入變數 並令其為qu
        printf("該供應商需抽檢的數量為%.lf",qu*0.01); //印出對應文字
        }
        else if (l == 'B') //若l等於B
        {
        printf("請輸入驗收檢查數量:"); //印出對應文字
        scanf("%lf",&qu);//提取輸入變數 並令其為qu
        printf("該供應商需抽檢的數量為%.lf",qu*0.1); //印出對應文字
        }
        else if (l == 'C') //若l等於C
        {
        printf("請輸入驗收檢查數量:"); //印出對應文字
        scanf("%lf",&qu);//提取輸入變數 並令其為qu
        printf("該供應商需抽檢的數量為%.lf",qu);//印出對應文字
        }
        else//若以上敘述不為真
        {
            printf("錯誤的供應商等級,將離開程式。"); //印出對應文字
            return 0; //回傳值0
        }
        printf("\n是否離開程式(0：否/1：是):"); //印出對應文字
        scanf("%d",&user);//提取輸入變數 並令其為user
    }
    return 0; //回傳值0
}
