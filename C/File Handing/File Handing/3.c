#include<stdio.h>       //���Y��
#include"three.h"     //���Y��

int main()      //�D�禡
{
    float h,w;      //�ŧi�ܼ�
    printf("�п�J����(����):");   //�L�X��r
    scanf("%f",&h);     //������J
    printf("�п�J�魫(����):");   //�L�X��r
    scanf("%f",&w);     //������J
    printf("�z��BMI��:%.2f",cal(h,w));     //�L�X��r

    return 0;     //�^�ǭ�0
}
