#include <stdio.h> /*���Y��*/

int main() /*�D�禡*/
{
    double h,BMI; /*�ŧih,BMI��Ӥp���ܼ�*/
    int w; /*�ŧiw������ܼ�*/

    printf("�п�J����(����):"); /*�L�X"�п�J����(����):"*/
    scanf("%lf",&h); /*������J���ƭ� �åO�䬰h*/
    printf("�п�J�魫(����):"); /*�L�X"�п�J�魫(����):"*/
    scanf("%d",&w); /*������J���ܼ� �åO�䬰w*/
    BMI= w/(h*h); /*�NBMI�t�� w/(h*h)*/
    printf("�z��BMI��:%.2f\n",BMI); /*�L�XBMI��(��ܨ�p���I�ĤG��)*/

    if(BMI < 18.5) /*�YBMI �p�� 18.5*/
        printf("�z���魫�L��"); /*�L�X"�z���魫�L��"*/
    else if (24 > BMI && BMI >= 18.5) /*�Y18.5��BMI< 24*/
        printf("�z���魫�����`�d��"); /*�L�X"�z���魫�b���`�d��*/
    else if (BMI < 27 && BMI >= 24 ) /*�Y 24��BMI< 27*/
        printf("�z���魫�L�D"); /*�L�X"�z���魫�L�D"*/
    else if (BMI>=27) /*�YBMI �j�󵥩� 27*/
        printf("�z���魫�έD"); /*�L�X"�z���魫�έD"*/

    return 0; /*�^�ǭ�0*/
}
