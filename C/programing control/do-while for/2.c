#include<stdio.h> //���Y��

int main() //�D�禡
{
    int enter,star,f;                   //�ŧienter star f ����ܼ�
    printf("�п�J�Q�n���h��:");        //�L�X �п�J�Q�n���h��
    scanf("%d",&f);                     //������J���ܼ� �åO�䬰f
    printf("\n");                       //����

    for(enter = f;enter >= 1;enter--)   //�]�wfor�j�� ��l��enter����h�� enter>=1�ɵ��� ���W�Ȭ�enter-1
    {
        for(star=1;star<=enter;star++)  //�]�wfor�j�� ��l��star=1 star<=enter�ɵ��� ���W�Ȭ�star+1
        {
            printf("*");                //�L�X *
        }
      printf("\n");  //����
    }

    return 0; //�^�ǭ�0
}

