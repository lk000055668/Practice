#include<stdio.h>   //���Y��
int cal(int x, int y);      //�ŧi�禡���

int main()      //�D�禡
{
    int x,y;        //�ŧi�ܼ�
    printf("��J��ơG");        //�L�X��r
    scanf("%d %d",&x,&y);       //������J
    printf("GCD:%d",cal(x,y));      //�L�X��r
    return 0;       //������J
}

int cal(int x,int y)        //�ƨ禡
{

   if (y == 0)      //y=0?
        return x;   //�^��x
    else
        return cal(y,x%y);      //�^��cal(y,x%y)
}
