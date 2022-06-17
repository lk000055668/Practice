#include <stdio.h>  /*引入標頭檔*/

int main() /*主函式*/
{
   double a,b; /*宣告變數a.b*/
   printf("質量(M):"); /*印出質量(M):*/
   scanf("%lf",&a);/*提取輸入的變數(double變數)並將其寫為a值*/
   printf("加速度(A):");/*印出加速度(A):*/
   scanf("%lf",&b);/*提取輸入的變數(double)並將其寫為b值*/
   printf("外力(F):%.1f %\n",a*b);/*印出外力(F):(計算a*b)並顯示到小數點第一位*/
   return 0; /*回傳值0*/
}
