#include<stdio.h>   //���Y��
#include<math.h>    //���Y��
#include<stdlib.h>  //���Y��
void t(float x);    //�ŧi�ƨ禡
void e(float x);    //�ŧi�ƨ禡

int main()  //�D�禡
{
    float user,f;   //�ŧi�ܼ�
    printf("�п�J�Q�p�⪺�Ʀr:\n");     //�L�X��r
    scanf("%f",&user);  //������J���ܼƨåt��user��
    printf("��ܷQ�ϥΪ��\��:\n");  //�L�X��r
    printf("1.�p��sin�������Pcos���l��\n");  //�L�X��r
    printf("2.�p��log�Plog10\n");  //�L�X��r
    scanf("%f",&f); ////������J���ܼƨåt��f��
    printf("�p�⵲�G��:\n");     //�L�X��r

    if( f == 1 )    //f=1?
    {
        t(user);
    }
    else    // f != 1
    {
        e(user);
    }
    return 0;   //�^�ǭ�0
}

void t( float x )   //�ƨ禡
{
    printf("%.6f �������O %.6f ��\n",x,sin(x*3.1415926/180));    //�L�X��r
    printf("%.6f ���l���O %.6f ��",x,cos(x*3.1415926/180));      //�L�X��r
}

void e( float x )   //�ƨ禡
{
    printf("log(%.6f) = %.6f\n",x,log(x));  //�L�X��r
    printf("log10(%.6f) = %.6f",x,log10(x));    //�L�X��r
}
