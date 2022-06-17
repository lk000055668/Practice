#include<stdio.h>       //標頭檔
//定義函式原形
void input(int*array1, int array_length);
void add (int*array1 , int *array2 , int *array3 , int array_length);

int main()
{
    //宣告變數 指標
    int l=5;
    int arr1[5], arr2[5], sum[5]={0};
    int*pt1= &arr1, *pt2= &arr2, *pt3= &sum;

    //印出文字 提取輸入
    printf("請輸入a陣列的5個數值\n");
    input(pt1, l);
    printf("請輸入b陣列的5個數值\n");
    input(pt2, l);
    printf("兩陣列相加的結果為\n");

    add (pt1, pt2, pt3, l); //呼叫函式
    //印出文字
    for(int i=0; i<l;++i){
    printf("%d ",*(pt3++));
    }

    return 0;

}

void input(int *pt,int s)
{
    //提取五次輸入
    for(int i=0; i<s; ++i)
        scanf("%d",pt++);
}

void add(int*pt1, int*pt2, int*pt3, int l)
{
    for(int i=0; i<l; ++i)
        *(pt3++) += *(pt1++) + *(pt2++);
}
