#include<stdio.h> //���Y��

int main() //�D�禡
{
    char l; //�ŧi�r���ܼ�l
    int user; //�ŧiuser����ܼ�
    double qu; //�ŧiqu�B�I���ܼ�
    user = 0; //�Nuser�ᤩ��0

    while(user == 0){ //c����0�� ����j��
        printf("�п�J�����ӵ���:"); //�L�X������r
        scanf(" %c",&l);//������J�ܼ� �åO�䬰l
        if (l == 'A') //�Yl����A
        {
        printf("�п�J�禬�ˬd�ƶq:");//�L�X������r
        scanf("%lf",&qu);//������J�ܼ� �åO�䬰qu
        printf("�Ө����ӻݩ��˪��ƶq��%.lf",qu*0.01); //�L�X������r
        }
        else if (l == 'B') //�Yl����B
        {
        printf("�п�J�禬�ˬd�ƶq:"); //�L�X������r
        scanf("%lf",&qu);//������J�ܼ� �åO�䬰qu
        printf("�Ө����ӻݩ��˪��ƶq��%.lf",qu*0.1); //�L�X������r
        }
        else if (l == 'C') //�Yl����C
        {
        printf("�п�J�禬�ˬd�ƶq:"); //�L�X������r
        scanf("%lf",&qu);//������J�ܼ� �åO�䬰qu
        printf("�Ө����ӻݩ��˪��ƶq��%.lf",qu);//�L�X������r
        }
        else//�Y�H�W�ԭz�����u
        {
            printf("���~�������ӵ���,�N���}�{���C"); //�L�X������r
            return 0; //�^�ǭ�0
        }
        printf("\n�O�_���}�{��(0�G�_/1�G�O):"); //�L�X������r
        scanf("%d",&user);//������J�ܼ� �åO�䬰user
    }
    return 0; //�^�ǭ�0
}
