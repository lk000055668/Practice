#include<stdio.h> //���Y��

int main() //�D�禡
{
    int y,c; //�ŧiy c��Ӿ���ܼ�
    double q1,q2,q3,avg; //�ŧiq1 q2 q3 avg �|�ӯB�I���ܼ�
    c = 0; //�Nc�ᤩ��0

    while(c != 3){ //�Yc������3 ����j��
        printf("��1�� �}�v��\n"); //�L�X������r
        scanf("%lf",&q1);//������J�ܼ� �åO�䬰q1��
        ++c;//c�[�@
        printf("��2�� �}�v��\n");//�L�X������r
        scanf("%lf",&q2);//������J�ܼ� �åO�䬰q2��
        ++c;//c�[�@
        printf("��3�� �}�v��\n");//�L�X������r
        scanf("%lf",&q3);//������J�ܼ� �åO�䬰q3��
        ++c;//c�[�@
    }
    avg = (q1+q2+q3)/3; //�Navg�ᤩ��(q1+q2+q3)/3
    printf("�����}�v��%.2f\n",avg);//�L�X������r
    if(avg=>90) //�Y�����j��90
        printf("�S���D"); //�L�X������r
    else if (avg=>60 && avg <90) //�Yavg�j��60�B�p��90
        printf("����ʱ���");//�L�X������r
    else//�Y�H�W�ԭz�����u
        printf("���u����");//�L�X������r

    return 0;//�^�ǭ�0
}
