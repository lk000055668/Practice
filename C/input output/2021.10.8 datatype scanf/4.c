#include <stdio.h> /*引入標頭檔*/

int main() /*主函式*/
{
   double a,b; /*宣告變數a.b*/
   printf("今日韓元匯率0.022~0.029:\n"); /*印出"今日韓元匯率0.022~0.029:" 並換行*/
   scanf("%lf",&a); /*提取輸入的變數 並將其另為a*/
   printf("請輸入期望兌換的韓元金額:\n"); /*印出"請輸入期望兌換的韓元金額:" 並換行*/
   scanf("%lf",&b); /*提取輸入的變數 並將其另為b*/
   printf("兌得的韓元金額:%.lf\n",b); /*印出"兌得的韓元金額:(b 取整數)" 並換行 */
   printf("轉換成台幣的金額:%.lf\n",b*a); /*印出"轉換成台幣的金額:(b*a取整數)"  並換行*/
   printf("須加收手續費100元\n"); /*印出"須加收手續費100元" 並換行*/
   printf("總共需支付台幣金額:%.lf",b*a+100); /*印出"總共需支付台幣金額:(b*a+100 取整數)" 並換行*/

   return 0; /*回傳值0*/

}
