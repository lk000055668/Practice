#include<stdio.h> /*���Y��*/

int main() /*�D�禡*/
{
    int b,c,all; /*�ŧib,c,all �T�Ӿ���ܼ�*/
    printf("�A��:"); /*�L�X "�A��:"*/
    scanf("%d",&c); /*������J���ܼ� �åO�䬰c��*/
    printf("�ɲ�:");/*�L�X"�ɲ�:"*/
    scanf("%d",&b); /*������J���ܼ� �åO�䬰b��*/
    all = c + b; /*�Nall �ᤩ��c+b*/
    printf("�`���B:%d\n",all); /*�L�X�`���B: �ô���*/

    if (all < 3000) /*�Yall<3000*/
    {
        printf("������\n"); /*�L�X ������ �ô���*/
        printf("���I:%d��",all); /*�L�X "���I: ��"�ô���*/
    }
    else if (all >= 3000 && all <=5999)  /*�Yall>=3000�Ball <=5999*/
    {
        all = 0.9*all;/*�Nall �ᤩ��all*0.9*/
        printf("9���u�f\n"); /*�L�X9���u�f �ô���*/
        printf("���I:%d��",all); /*�L�X "���I: ��"*/
    }
    else if(all >= 6000) /*�Yall >= 6000*/
    {
        all = 0.8*all; /*�Nall�ᤩ��all*0.8*/
        printf("8���u�f\n");/*�L�X 8���u�f �ô���*/
        printf("���I:%d��",all); /*�L�X "���I: ��"*/
    }

    return 0; /*�^�ǭ�0*/
}
