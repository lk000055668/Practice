#include<stdio.h> //標頭檔

int main() //主函式
{
    int y,c; //宣告y c兩個整數變數
    double q1,q2,q3,avg; //宣告q1 q2 q3 avg 四個浮點數變數
    c = 0; //將c賦予成0

    while(c != 3){ //若c不等於3 執行迴圈
        printf("第1期 良率為\n"); //印出對應文字
        scanf("%lf",&q1);//提取輸入變數 並令其為q1值
        ++c;//c加一
        printf("第2期 良率為\n");//印出對應文字
        scanf("%lf",&q2);//提取輸入變數 並令其為q2值
        ++c;//c加一
        printf("第3期 良率為\n");//印出對應文字
        scanf("%lf",&q3);//提取輸入變數 並令其為q3值
        ++c;//c加一
    }
    avg = (q1+q2+q3)/3; //將avg賦予為(q1+q2+q3)/3
    printf("平均良率為%.2f\n",avg);//印出對應文字
    if(avg=>90) //若平均大於90
        printf("沒問題"); //印出對應文字
    else if (avg=>60 && avg <90) //若avg大於60且小於90
        printf("持續監控中");//印出對應文字
    else//若以上敘述不為真
        printf("停線維修");//印出對應文字

    return 0;//回傳值0
}
