#include<stdio.h>   //���Y��
float f_max(float arr[],float x);   //�ŧi�쫬
int main()  //�D�禡
{
    float max=0;    //�ŧi�ܼ�
    float x[5]={2.97,5.31,8.46,6.33,5.18};  //�ŧi�}�C
    printf("5�ռƭ�:\n");  //�L�X��r
    for(int i=0;i<5;++i)    //for loop
    {
        printf("%.2f  ",x[i]);  //�L�X��r
    }
    max = f_max(x,max);
    printf("\n\n�̤j�ƭȬ�%.2f",max);    //�L�X��r
    return 0;   //�^�ǭ�0
}

float f_max (float arr[],float max)     //�ƨ禡
{
    for(int i=0;i<5;++i)    //for loop
    {
        if(max<arr[i])  //max<arr[i]?
        max = arr[i];
    }
    return max; //�^��max
}
