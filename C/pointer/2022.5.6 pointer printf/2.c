#include<stdio.h>   //���Y��
int main()      //�D�禡
{
    int num1, num2,x;   //�ŧi�ܼ�
    int *pn1, *pn2;     //�ŧi����

    printf("��Jnum1:");      //�L�X��r
    scanf("%d",&num1);      //������J
    printf("��Jnum2:");      //�L�X��r
    scanf("%d",&num2);      //������J
    pn1 = &num1;
    pn2 = &num2;
    x = *pn1 * *pn2;
    printf("%d���H%d����%d��5���l�Ƶ���%d",*pn1,*pn2,x,x%5);  //�L�X��r

    return 0;
}
