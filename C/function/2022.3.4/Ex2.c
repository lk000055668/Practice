
#include<stdio.h>   //���Y��
float t(float x);   //�ŧi�ƨ禡

int main()  //�D�禡
{
    float tc=0,tf=0;    //�ŧi�ܼ�
    printf("��J�ؤ�ū�:");  //�L�X��r
    scanf("%f",&tf);    //������J����
    tc = t(tf); //�Ntc�t���ƨ禡t���^�ǭ�
    printf("���ū׬�:%.6f",tc);    //�L�X��r

    return 0;   //�^�ǭ�0
}

float t(float tf)   //�ƨ禡t
{
    float y;    //�ŧi�ܼ�
    y = (tf-32)*5/9;    //�Ny�t���p�⪺��
    return y;   //�^��y��
}
