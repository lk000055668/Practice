#include<stdio.h>       //���Y��
float vol (float x);        //�ŧi�禡���
float flow (float y);       //�ŧi�禡���
int main()      //�D�禡
{
    float conclu,func,user;     //�ŧi�ܼ�
    printf("GB��TB�Ы�1\n");       //�L�X��r
    printf("Mbps��MB/s�Ы�2\n");       //�L�X��r
    printf("�п�ܭn�ഫ����T���:\n");       //�L�X��r
    scanf("%f",&func);      //������J
    printf("�п�J���ഫ���ƭ�\n");      //�L�X��r
    scanf("%f",&user);      //������J
    if(func == 1 )      //func=1?
    {
        conclu = vol(user);     //�I�s�ƨ禡
        printf("%.0fGB��%.2f TB",user,conclu);//�L�X��r
    }
    else
    {
        conclu = flow(user);        //�I�s�ƨ禡
        printf("%.0fMbps��%.2fMB/s",user,conclu);        //�L�X��r
    }
     return 0;      //�^�ǭ�0
}

float vol (float x)     //�ƨ禡
{
    return x/1024;      //�^��x/1024
}

float flow (float y)        //�ƨ禡
{
    return y*0.125;     //�^��y*0.125
}
