#include<stdio.h> //���Y��


int main() //�D�禡
{
    int c,q1,q2,q3; //�ŧic q1 q2 q3 ����ܼ�
    double avg,income; //�ŧiavg income �B�I���ܼ�
    c = 0; //�Nc�ᤩ��0

    while(c != 3 ){ // c������3�� ����j��
        printf("�п�J�Ĥ@�����J:\n"); //�L�X������r
        scanf("%d",&q1); //������J�ܼ� �åO�䬰q1��
        ++c; //c�[�@
        printf("�п�J�ĤG�����J:\n"); //�L�X������r
        scanf("%d",&q2); //������J�ܼ� �åO�䬰q2��
        ++c; //c�[�@
        printf("�п�J�ĤT�����J:\n"); //�L�X������r
        scanf("%d",&q3); //������J�ܼ� �åO�䬰q3��
        ++c; //c�[�@
    }
    income = q1 + q2 + q3; //�Nincome�ᤩ�� q1+q2+q3
    avg = income / 3; // �Navg�ᤩ��income/3
    printf("�`���J��%.lf\n",income); //�L�X������r
    printf("�������J��%.lf",avg); //�L�X������r

    return 0;//�^�ǭ�0
}
