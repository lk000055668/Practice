#include<stdio.h>   //���Y��
int fib(int);   //�ŧi�ƨ禡
int main()  //�D�禡
{
    int x;  //�ŧi�ܼ�
    printf("�п�J�@�Ӿ��:"); //�L�X��r
    scanf("%d",&x); //������J
    for(int i=1;i<=x;++i)   //i<=x?
        printf("fib(%d)=%d\n",i,fib(i));    //�L�X��r
    return 0;   //�^�ǭ�0
}
int fib(int x)  //�ƨ禡
{
    if(x==1 || x==2)    //x=1 or 2 ?
        return 1;   //�^��1
    else{
        return fib(x-1)+fib(x-2);   //�^��fib(x-1)+fib(x-2)
    }
}
