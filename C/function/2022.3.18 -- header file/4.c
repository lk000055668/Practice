#include"four.h"      //���Y��
#include<stdio.h>       //���Y��


int main()      //�D�禡
{
    int x;  //�ŧi�ܼ�
    srand(time(NULL));  //�üƺؤl�X
    x = rand() % 100 + 1;   //�ü�
    printf("�w��[�J�|��\n");     //�L�X��r
    printf("�z���|���Ǹ���%d\n",x);    //�L�X��r
    sortg( x);  //�I�s�禡

    return 0;   //�^�ǭ�0
}
