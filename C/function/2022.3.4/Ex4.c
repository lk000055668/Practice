#include<stdio.h>   //���Y��
#include<math.h>    //���Y��
void cal(int x);    //�ŧi�ƨ禡

int main()      //�D�禡
{
    for(int i=1;i<11;++i)   //�j��
    {
        cal(i);     //�I�s�ƨ禡
    }
    return 0;   //�^�ǭ�0
}

void cal (int i)    //�ƨ禡
{
    int e;      //�ŧi�ܼ�
    e = pow(i,2);       //�Q��pow�禡�p��Ƚᤩ��e
    printf("%d�����謰%d\n",i,e);       //�L�X��r
}
//pow(����,����)
