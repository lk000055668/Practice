#include<stdio.h>   //���Y��
int main()  //�D�禡
{
    static char x[] = {'A','B','C','D','E','F','G','H','I','J'};    //�ŧi�R�A�}�C
    for(int i=0;i<10;++i)
    {
        printf("%c",x[i]);  //�L�X��r
        printf(" %d\n",i);  //�L�X��r
    }
    return 0;   //�^�ǭ�0
}

