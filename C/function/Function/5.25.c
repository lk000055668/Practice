#include<stdio.h>   //���Y��
#include<stdlib.h>  //���Y��
int get_int(void);  //�ŧi�ƨ禡
int trans(int x);   //�ŧi�ƨ禡

int main()  //�D�禡
{
    int u;  //�ŧi�ܼ�
    u = get_int();  //u =�ƨ禡�^�ǭ�
    trans(u);   //�I�s�ܼ�trans
    return 0;   //�^�ǭ�0
}

int get_int(void)   //�ƨ禡
{
    int user;   //�ŧi�ܼ�
    printf("�п�J�c�l�ؤo(cm):"); //�L�X��r
    scanf("%d",&user);  //������J���ܼ�
    return user;    //�^��user��
}

int trans(int user) //�ƨ禡
{
    int e;  //�ŧi�ܼ�
    e = (user+1.5)*3/2; //(user+1.5)*3/2
    printf("%d�����ഫ���ڬw�ؤo��:%d",user,e);   //�L�X��r

}
