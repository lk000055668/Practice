#include<stdio.h>   //���Y��
#include<stdlib.h>  //���Y��
void f_1(float x,float y);  //�ŧi�ƨ禡
void f_2(float x,float y);  //�ŧi�ƨ禡
void f_3(float x,float y);  //�ŧi�ƨ禡

int main()  //�D�禡
{
    float x,y;  //�ŧi�ܼ�
    int c;  //�ŧi�ܼ�
    printf("�п�J�ƦrX:");  //�L�X��r
    scanf("%f",&x);     //������J
    printf("�п�J�ƦrY:");  //�L�X��r
    scanf("%f",&y);     //������J
    printf("���1.�T��X�[�G��Y\n");    //�L�X��r
    printf("���2.X�����Y����\n");    //�L�X��r
    printf("���3.X��Y\n");    //�L�X��r
    printf("����禡�N�X?");  //�L�X��r
    scanf("%d",&c);     //������J
    if(c == 1)      //c=1?
        f_1(x,y);   //�I�sf_1
    else if (c == 2)    //c=2?
        f_2(x,y);   //�I�sf_2
    else    //�_�h
        f_3(x,y);   //�I�sf_3

    return 0;   //�^�ǭ�0
}

void f_1(float x,float y)   //�ƨ禡
{
    printf("�禡���浲�G%.1f",3*x+2*y);   //�L�X��r
}

void f_2(float x,float y)   //�ƨ禡
{
    float a;    //�ŧi�ܼ�
    a = pow(x,2) - pow(y,2);    //a = x^2-y^2
    printf("�禡���浲�G%.1f",a);     //�ƨ禡
}

void f_3(float x,float y)   //�ƨ禡
{
    printf("�禡���浲�G%.3f",x/y);       //�ƨ禡
}
