#include<stdio.h> //���Y��

int main() //�D�禡
{
    int password,c; //�ŧipassword c ����ܼ�
    printf("�п�J�K�X:\n"); //�L�X������r
    scanf("%d",&password); //������J���ܼƨåO�䬰password��
    c=1; //�Nc�ᤩ��1

    while(c != 4){ // c������4�� ����j��
       if (password != 9527){ //�Ypassword������9527
        printf("�K�X���~\n"); //�L�X�K�X���~ �ô���
        scanf("%d",&password); //������J���ܼƨåO�䬰password��
        ++c; //c�[�@
       }
       else{ //�ԭz�����u
        printf("�K�X���T");//�L�X�K�X���T
        c = 4; //�Nc�ᤩ��4
        }

    }


    return 0; //�^�ǭ�0
}
