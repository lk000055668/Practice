#include<stdio.h> //���Y��

int main() //�D�禡
{
    int stop,choice,total,meal; //�ŧistop choice total meal ����ܼ�

    do
    {
        printf("���쭹��A�Ȩt�ΡA�z�n!\n"); //�L�X ����...
        printf("�z�i�H��(1)�����B(2)���� �п�J�z�����:"); //�L�X�z�i�H��...
        scanf("%d",&choice); //������J���ܼ� �åt�䬰choice
        if (choice == 2 ) //�Ychoice = 2
        {
            printf("�z��F����\n"); //�L�X�z���..
            printf("�������~��set (1)�B������set(2)�B����set (3):\n"); //�L�X������...
            printf("�п�J�z�����:");//�L�X�п�J...
            scanf("%d",&meal);//������J���ȨåO�䬰meal

            if(meal == 1) //�Ymeal = 1
            {
                printf("�z��F�~��set:\n"); //�L�X �z��F...
                printf("�~��set��: �j���Ⱥ~���B �����B����\n"); //�L�X�~��...
                printf("�~��set�O150 ��\n"); //�L�X�~��...
                total = total + 150; //�Ntotal�[�W150
                printf("�`�@�O:%d��\n",total);//�L�X�`�@�OX��

            }
            if(meal == 2) //�Ymeal = 2
            {
                printf("�z��F������set:\n"); //�L�X �z��F...
                printf("������set��: �������B�T���B�N�f��\n"); //�L�X������...
                printf("������set�O 120 ��\n"); //�L�X������..
                total = total + 120; //�Ntotal�[�W120
                printf("�`�@�O:%d��\n",total);//�L�X�`�@�OX��

            }
            if(meal == 3) //�Ymeal = 3
            {
                printf("�z��F����set:\n"); //�L�X�z��F...
                printf("����set��: ��O���ơB�����B���B\n");//�L�X����...
                printf("����set�O 200 ��\n");//�L�X����...
                total = total + 200;//�Ntotal�[�W200
                printf("�`�@�O:%d��\n",total);//�L�X�`�@X��
            }
        }
        else //�Ychoice������2
        {
            printf("�z��F����\n"); //�L�X�z��...
            printf("������(1)�����B(2)�ѭ��B(3)���� �п�J�z�����:");//�L�X������..
            scanf("%d",&meal);//������J���ܼƨåO�䬰meal

            if(meal == 1) //�Ymeal = 1
            {
                printf("�z��F����\n"); //�L�X�z��F...
                printf("������: �����L�B�����z�B���a�B���� \n"); //�L�X������...
                printf("�����O90 ��\n"); //�L�X����...
                total = total + 90;//�Ntotal�[�W90
                printf("�`�@�O:%d��\n",total); //�L�X�`�@�OX��

            }
            if(meal == 2) //�Ymeal = 2
            {
                printf("�z��F�ѭ�:\n"); //�L�X�z��...
                printf("�ѭ���: ������\n");//�L�X�ѭ�...
                printf("�ѭ��O 80 ��\n");//�L�X�ѭ�...
                total = total + 80; //�Ntotal�[�W80
                printf("�`�@�O:%d��\n",total);//�L�X�`�@�Ox��

            }
            if(meal == 3) //�Ymeal = 3
            {
                printf("�z��F����:\n"); //�L�X�z��...
                printf("������: ���A����\n"); //�L�X����...
                printf("�����O 90 ��\n");//�L�X����...
                total = total + 90;//�Ntotal�[�W90
                printf("�`�@�O:%d��\n",total);//�L�X�`�@�OX��
            }
        }
    printf("���±z�ϥΥ��t�ΡA�ٻݭn�~���I�ܡH�_(0)�B�O (1):"); //�L�X����...
    scanf("%d",&stop);//������J���ܼ� �åO�䬰stop
    }
    while(stop == 1); //��stop=1�� ����j��

    printf("���±z�ϥΥ��t�ΡA�ܰ����ର�z�A�ȡA�A��!"); //�L�X���±z...

    return 0; //�^�ǭ�0
}
