#include<stdio.h> //���Y��

int main () //�D�禡
{
    char place; //�ŧiplace��char���A�ܼ�
    printf("�Q�w�ƭ��ج��ʩO(A: �ʪ�����B:���v���C:�F�y D:�_�ꭷ��)\n"); //�L�X"�Q�w�ƭ��ج��ʩO(A: �ʪ�����B:���v���C:�F�y D:�_�ꭷ��)" �ô���

    scanf("%c",&place); //������J���ܼ� �åO�䬰place

    switch (place){ //�P�_place�ܼ�
        case 'A': //�Yplace��A
            printf("��{:�ʳ��B�j��"); //�L�X ��{:�ʳ��B�j��
            break; //����switch�`��
        case 'B': //�Yplace��B
            printf("��{:�֩��B����"); //�L�X ��{:�֩��B����
            break;//����switch�`��
        case 'C'://�Yplace��C
            printf("��{:�R÷");//�L�X ��{:�R÷
            break;//����switch�`��
        case 'D'://����switch�`��
            printf("��{:�_���D");//�L�X ��{:�_���D
        default: //�Y�H�W�������u
            printf("��J���~"); //�L�X ��J���~
            break;//����switch�`��
    }

    return 0; //�^�ǭ�0
}
