#include<stdio.h>    //���Y��

int main()      //�D�禡
{
    int arrq[5];        //�ŧi����5���}�C
    int p;      //�ŧip����ܼ�

    printf("�Ш̧ǿ�J5�a�t�Ӫ���f�q:\n");         //�L�X �Ш̧�...
    for(int i=1;i<=5;i++)           //i<=5?
    {
        printf("��%d�a:",i);      //�L�X��X�a
        scanf("%d",&arrq[i]);       //������J���ܼ� �t���}�C������i��
    }
    printf("�п�J�Q�n�d�߲ĴX�a�t�ӥ�f�q:");         //�L�X �п�J...
    scanf("%d",&p);     //������J���ܼƨåt��p
    printf("��%d�a���q����f�q��%d",p,arrq[p]);      //�L�X��X�a...
    return 0;   //�^�ǭ�0
}
