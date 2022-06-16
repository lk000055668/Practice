#include <stdio.h> /*引入標頭檔*/

int main() /*主函式*/
{
     double a,b,c;                         /*以double變數型態宣告a,b,c*/
     printf("請輸入a機台產量:\n");         /*印出"請輸入a機台產量:"並換行*/
     scanf("%lf",&a);                      /*提取輸入的數值 並令其為a值 */
     printf("請輸入b機台產量:\n");         /*印出"請輸入b機台產量:"並換行*/
     scanf("%lf",&b);                      /*提取輸入的數值 並令其為b值 */
     printf("請輸入c機台產量:\n");         /*印出"請輸入c機台產量:"並換行*/
     scanf("%lf",&c);                      /*提取輸入的數值 並令其為c值 */
     printf("總產量:%.lf %",a+b+c);        /*印出"總產量:"*/
     return 0;                            /*回傳值0*/

}
