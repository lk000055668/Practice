#include<stdio.h>
void plus(int *data ,int add);

int main()
{
    int d[5],a;
    int*dptr = d;

    printf("請輸入 5 numbers:\n");
    //提取五次輸入
    for(int i=0; i<5;++i)
        scanf("%d",&d[i]);

    //印出陣列
    printf("呼叫函式之前，印出陣列\n");
    printf("data[5]:[");
    for(int i=0; i<5;++i){
        if(i!=4)
            printf("%d,",d[i]);
        else
            printf("%d]\n",d[i]);
    }
    //提取要加入的數字
    printf("請輸入你想要加的數字:\n");
    scanf("%d",&a);
    //函式呼叫
    plus(dptr,a);
    //印出文字
    printf("呼叫函式之後，在主函式印出陣列data[5]為:[");
    for(int i=0; i<5;++i){
        if(i!=4)
            printf("%d,",d[i]);
        else
            printf("%d]",d[i]);
    }
    return 0;
}
void plus(int*data,int a)
{
    //逐項增加a
    for(int i=0; i<5; ++i){
        *(data++) += a;
    }
}
