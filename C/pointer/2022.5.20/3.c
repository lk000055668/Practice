#include<stdio.h>  //���Y��

void euro(int*x);   //�w�q�쫬

int main()      //�D�禡
{
    int a,b;        //�ŧi�ܼ�

    printf("�п�J�c�l�ؤo(cm): ");        //�L�X��r
    scanf("%d", &a);        //������J
    b = a;
    euro(&a);   //�禡�I�s
    printf("%d�����ഫ���ڬw�ؤo����:%d", b, a);       //�L�X��r

    return 0;
}

void euro(int*x)
{
    *x = (*x +1.5)*3/2;
}
