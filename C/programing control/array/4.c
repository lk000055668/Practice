#include<stdio.h>      //���Y��

int main()      //�D�禡
{
    float sum,num[5];       //�ŧi�ܼ� �}�C

    for(int i=0;i<=4;++i)       //i<=4?
    {
        printf("Input a number to num[%d]:",i+1);   //�L�Xinput...
        scanf("%f",&num[i]);        //������J�ܼ� �åt���}�C������
        sum = sum + num[i];         //sum +num[i]�ᤩ��sum
    }
    printf("The average is %.2f",sum/5);        //�L�Xthe average
    return 0;       //�^�ǭ�0
}
