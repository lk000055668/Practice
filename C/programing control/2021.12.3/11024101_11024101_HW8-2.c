#include<stdio.h> //���Y��
#include<stdlib.h> //���Y��
#include<time.h> //���Y��

int main() //�D�禡
{
    int p,total,da,m; //�ŧi p total da m ����ܼ�
    printf("�п�J�A���s�ڥؼЪ��B(10,000���H�U):\n"); //�L�X �п�J... �ô���
    scanf("%d",&p); //������J���ܼƨåO��p
    srand(time(NULL)); //�]�w�üƺؤl�X
    m = 1; //m�ᤩ��1
    while(total < p) //total < p?
    {
        da = rand() % 1001 +1000; //da �ᤩ1000-2000���ܼ�
        total = total + da;//total�ᤩ��total + da
        printf("��%d�Ӥ�A�s�F%d��\n",m,da); //�L�X��X�Ӥ�... �ô���
        printf("�{�b��%d��\n",total); //�L�X�{�b��...�ô���
        ++m; //m+1
    }
    printf("���ߧA�s��ؼФF!"); //�L�X����...

    return 0; //�^�ǭ�0

}
