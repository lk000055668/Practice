#include<stdio.h>   //���Y��
void which(int x[]);        //�ŧi�禡���

int main()      //�D�禡
{
    int a,b,c;      //�ŧi�ܼ�
    printf("�п�J�T����G\n");        //�L�X��r
    scanf("%d %d %d",&a,&b,&c);     //������J
    int t[3] = {a,b,c};     //�ŧi�}�C�õ����ƭ�
    //bubble sort
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (t[j] > t[i]) {
                int temp = t[j];
                t[j] = t[i];
                t[i] = temp;
                }
        }
    }
    which(t);       //�ƨ禡
    return 0;       //�^�ǭ�0
}

void which(int x[])     //�ƨ禡
{
    printf("���G��ܬ��G\n");     //�L�X��r
    if (x[0]+x[1] <= x[2] )     // x[0]+x[1] <= x[2]?
        printf("�L�k�c���T����(NO)");      //�L�X��r
    else if (x[0]*x[0] + x[1]*x[1] < x[2]*x[2])     //x[0]*x[0] + x[1]*x[1] < x[2]*x[2]?
        printf("�w���T����(Obtuse triangle)");       //�L�X��r
    else if (x[0]*x[0] + x[1]*x[1] == x[2]*x[2])    //x[0]*x[0] + x[1]*x[1] = x[2]*x[2]?
        printf("�����T����(Right triangle)");        //�L�X��r
    else
        printf("�U���T����(Acute triangle)");        //�L�X��r
}
