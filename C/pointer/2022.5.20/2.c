#include<stdio.h>       //���Y��
void temperature(float*x);      //�w�q�쫬

int main()      //�D�禡
{
    float a;    //�ŧi�ܼ�
    printf("�п�J�ؤ�ū�:");     //�L�X��r
    scanf("%f", &a);        //������J
    temperature(&a);        //�禡�I�s
    printf("���ū׬�:%f",a);       //�L�X��r

    return 0;
}

void temperature(float*x)
{
    *x = (*x-32)*5/9;
}
