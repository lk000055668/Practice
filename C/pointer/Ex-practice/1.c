#include<stdio.h>   //���Y��
void year(int*x);   //�w�q�쫬

int main()      //�D�禡
{
    int x;  //�ŧi�ܼ�
    printf("�п�J�X�ͦ~��(����):");     //�L�X��r
    scanf("%d", &x);        //������J
    year(&x);       //�禡�I�s
    printf("�z�X�ͩ�褸%d�~",x);      //�L�X��r

    return 0;
}

void year(int *x_add)
{
    *x_add = *x_add + 1911;
}
