#include<stdio.h>   //���Y��

int get_int(void);  //�ŧi�ƨ禡
int find_mini(int, int);    //�ŧi�ƨ禡


int main()  //�D�禡
{
    int x,y;    //�ŧi�ܼ�
    x = get_int();  //�ƨ禡�^�ǭȥt��x
    y = get_int();  //�ƨ禡�^�ǭȥt��x
    printf("�̤p�ȬO%d",find_mini(x,y));    //�L�X��r

    return 0;   //�^�ǭ�0
}

int get_int()   //�ƨ禡
{
    printf("�п�J�@�Ӿ��:");     //�L�X��r
    int num;    //�ŧi�ܼ�
    scanf("%d",&num);   //������J
    return num;     //�^��num
}

int find_mini(int x, int y)     //�ƨ禡
{
    if(x<y)     //x<y?
        return x;   //�^��x
    else
        return y;   //�^��y
}
