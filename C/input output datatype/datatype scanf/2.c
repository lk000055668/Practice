#include <stdio.h> /*引入標頭檔*/

int main()   /*主函式*/
{
     double a,b;                         /*以double變數型態宣告a,b*/
     printf("體積:");                    /*印出"體積:"*/
     scanf("%lf",&a);                    /*提取輸入的數值 並令其為a值*/
     printf("密度:");                    /*印出"密度:"*/
     scanf("%lf",&b);                     /*提取輸入的數值 並令其為b值*/
     printf("質量:%.1f %\n",a*b);          /*印"質量:"並計算到小數點第一位*/
     return 0;   /*回傳值0*/

}
