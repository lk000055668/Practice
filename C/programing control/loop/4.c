#include<stdio.h> //���Y��
#include<time.h> //���Y��
#include<stdlib.h> //���Y��

int main() //�D�禡
{
    int num,con,de,choice; //�ŧi num con de choice����ܼ�
    double h; //�ŧih �B�I���ܼ�
    char fun; //�ŧifun�r���ܼ�
    srand(time(NULL)); //�]�w�üƺؤl�X


    do
    {
        printf("�п�J(A:�s�W�|�� B:�[��)\n"); //�L�X �п�J...�ô���
        scanf(" %c",&fun); //������J���ܼƨåO�䬰fun
        if(fun == 'A') //fun = A?
        {
            num = rand() %100 + 1; //�N1-100���üƽᤩ��num
            printf("�w��[�J\n"); //�L�X�w��[�J�ô���
            printf("�z���|���Ǹ���%d\n",num); //�L�X�z��... �ô���
            if(num % 2 == 0) //num % 2 = 0?
                printf("�z�Ҧb���էO���A��\n"); //�L�X�A�Ҧb...�ô���
            else //�Y�ԭz�����u
                printf("�z�Ҧb���էO���Ҳ�\n");//�L�X�A�Ҧb...�ô���
        }
        else //�Y�ԭz�����u
        {
            printf("�w��ϥΥ[�Ȩt��\n"); //�L�X�w��...�ô���
            printf("�z�ثe���l�B��%d��\n",con); //�L�X�z�ثe... �ô���
            printf("�п�J�n�[�Ȫ����B\n"); //�L�X �п�J...�ô���
            scanf("%d",&de); //������J���ܼƨåO�䬰de
            printf("�[��%d��\n",de);//�L�X�[��...�ô���
            h = de * 0.05; //de*0.05�ᤩ��h
            de = de -h; //de-h�ᤩ��de
            printf("��������O%.lf��\n",h); //�L�X����...�ô���
            printf("��ڥ[��%d��\n",de); //�L�X���...�ô���
            con = con + de; //con + de �ᤩ�� con
            printf("�[�ȫ᪺���B��%d��\n",con); //�L�X�[�ȫ�...�ô���
        }
        printf("���±z�ϥΥ��t�ΡA�O�_�ٻݭn�~��ϥΡH �_(0)�B�O (1):"); //�L�X����...�ô���
        scanf("%d",&choice); //������J���ܼƨåO�䬰choice
    }while(choice == 1); //choice =1?
    printf("���±z�ϥΥ��t�ΡA �ܰ����ର�z�A�ȡA�A��!"); //�L�X����...�ô���
    return 0; //�^�ǭ�0
}
