#include<stdio.h>       //���Y��
#include<stdlib.h>      //���Y��
#include<time.h>        //���Y��
void jud(int*a,int*b);      //�w�q�쫬

int main()      //�D�禡
{
    int x,y;        //�ŧi�ܼ�
    srand(NULL);        //�üƺؤl�X
    y = rand() % 12 + 1;

    printf("�п�J�o����l�I�Ƭ�(1)�j��(2)�p:");//�L�X��r
    scanf("%d",&x); //������J

    jud(&x,&y); //�禡�I�s
    return 0;
}

void jud(int*a,int*b)
{
    //�q�j
    if(*a == 1){
        //�ƭȤp
        if(*b<7)
            printf("�A��F! �ƭ��`�M���G%d",*b);
        //�ƭȤj
        else{
            printf("�AĹ�F! �ƭ��`�M���G%d",*b);
        }
    }
    //�q�p
    else{
        //�ƭȤp
        if(*b<7)
            printf("�AĹ�F! �ƭ��`�M���G%d",*b);
        //�ƭȤj
        else{
            printf("�A��F! �ƭ��`�M���G%d",*b);
        }
    }
}
