#include<stdio.h>   //���Y��
int main()     //�D�禡
{
    float ab;       //�ŧi�ܼ�
    float *abptr;       //�ŧi����

    printf("Enter the value of ab :");      //�L�X��r
    scanf("%f",&ab);        //������J

    printf("The value of ab is %f\n", ab);      //�L�X��r
    printf("The address of ab is %p\n", &ab);   //�L�X��r
    abptr = &ab;
    printf("The pointer to float of abptr is %f\n",*abptr);     //�L�X��r
    printf("The address of abptr is %p",abptr);    //�L�X��r

    return 0;
}
