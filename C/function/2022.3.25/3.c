#include<stdio.h>       //���Y��
int cal (int arr1[], int arr2[]);       //�ŧi�쫬

int main()      //���Y��
{
    int f[6]={24,16,31,19,27,10}, total;        //�ŧi�ܼ�  �}�C
    int p[6]={1500,2100,1400,3100,2800,1000};   //�ŧi�}�C
    total = cal (f,p);
    printf("\n�`���欰%d",total);   //�L�X��r
    return 0;   //�^�ǭ�0
}

int cal(int f[], int p[])   //�ƨ禡
{
    int total;  //�ŧi�ܼ�
    printf("6�ؤ��G���O��������:\n");   //�L�X��r
    for(int i=0;i<6;++i)
    {
        printf("%d ",f[i]);
    }
    printf("\n6�ؤ��G���O�ʶR���ƶq:\n");
    for(int i=0;i<6;++i)
    {
        printf("%d ",p[i]);
    }
    for(int i=0;i<6;++i)
        total = total + f[i]*p[i];  //�p���`����
    return total;   //�^��total
}
