#include<stdio.h>   //���Y��
void func2(int x,int g);   //�ŧi�ƨ禡(�L�^�ǭ�)

int main()  //�D�禡
{
    int t,g;    //�ŧi�ܼ�
    for(int i=1;i<10;++i)   //�j��
    {
        func2(i,g);     //�I�s�ƨ禡
    }
    return 0;   //�^�ǭ�0
}

void func2(int i,int g)     //�ƨ禡
{
    g = 3*i;    //g�ȥt��3*i
    printf("3*%d=%d\n",i,g);    //�L�X��r
}
