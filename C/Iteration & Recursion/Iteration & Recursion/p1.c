#include<stdio.h>       //���Y��
int sum(int x);     //�ŧi�ƨ禡
int main()  //�D�禡
{
    int x;  //�ŧi�ܼ�
    printf("Enter a number:");   //�L�X��r
    scanf("%d",&x);     //������J
    printf("1*2+2*3+3*4+�K+(n-1)*n=%d",sum(x));  //�L�X��r

    return 0;       //�^�ǭ�0
}
int sum (int x)     //�ƨ禡
{
    if(x==1)       //x=1?
        return 0;   //�^��0
    else
        return sum(x-1)+x*(x-1);    //�^��sum(x-1)+x*(x-1)
}

