
#include<stdio.h>   //���Y��
int year(int x); //�ŧi�ƨ禡

int main()  //�D�禡
{
    int wy, my; //�ŧi�ܼ�
    printf("�п�J�X�ͦ~��(����):"); //�L�X��r
    scanf("%d",&my);    //������J���ܼ�
    wy = year(my);  //wy�O���ƨ禡�^�ǭ�
    printf("�z�X�ͩ�褸%d�~",wy); //�L�X��r

    return 0;   //�^�ǭ�0
}
int year(int x) //year�禡
{
    return x+1911;  //�^��x+1911
}
