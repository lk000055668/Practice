#include<stdlib.h>      //���Y��
#include<stdio.h>       //���Y��
#include<time.h>        //���Y��
#include "one.h"      //���Y��
void bsort(int x[]);    //�ŧi�禡���

int main()      //�D�禡
{
    int arr[10]={0};     //�ŧi�}�C
    srand(time(NULL));      //�üƺؤl�X
    printf("10��ǥͪ����Z�G\n");      //�L�X��r
    for(int i=0;i<=10;++i)      //for loop
    {
        arr[i] = rand() %100 + 1;   //�N�}�C�������U���ü�
        printf("%d ",arr[i]);   //�L�X��r
    }

    bsort(arr);     //�ƨ禡
    as(arr);        //�ƨ禡
    return 0;           //�^�ǭ�0
}

void bsort (int x[])
{
    //bubble sort
    for(int i=0;i<=10;++i)
    {
        for(int j=0;j<i;++j)
        {
            if(x[j] >x[i])
            {
                int temp = x[j];
                x[j]=x[i];
                x[i]=temp;
            }
        }
    }
    printf("\n�Ƨǫ�G\n");     //�L�X��r
    for(int i=0;i<=10;++i)
        printf("%d ",x[i]);     //�L�X��r
}
