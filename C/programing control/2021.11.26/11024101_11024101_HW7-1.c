#include<stdio.h> //���Y��

int main() //�D�禡
{
    int total,u,c,m;                   //�ŧi total u c m����ܼ�

    printf("�п�J�`�@�n�p��X��:\n"); //�L�X �п�J�`�@�n�p��X��: �ô���
    scanf("%d",&u);                    //������J���ܼ� �åO�䬰u
    c = 0; //�ᤩc��0
    for(c=1;c<=u;c++){                 //�]�wfor�j�� ��l��c=1 ������c<=u ���W�Ȭ�1
        printf("�п�J��%d�����J:",c); // �L�X �п�J��X�����J;
        scanf("%d",&m);                //������J���ܼƨåO�䬰m
        total = total + m;             //�ᤩtotal=total+m
        printf("�п�J��%d����X:",c); // �L�X �п�J��X����X;
        scanf("%d",&m);                //������J���ܼƨåO�䬰m
        total = total - m;             //�ᤩtotal=total-m
    }
    printf("�`�l�B��%d",total);        //�L�X �`�l�B��
    return 0; //�^�ǭ�0
}
