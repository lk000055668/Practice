#include<stdio.h> //���Y��

int main() //�D�禡
{
    int user,c; //�ŧiuser c ����ܼ�
    printf("Enter an integer:"); //�L�X Enter...
    scanf("%d",&user); //������J���ܼƨåO�䬰user
    for(c = 1;c <= 10;c++) //�]�w�j��_�l�� 1 ������ c <=10 ���W��c+1
    {
        printf("%d * %d = %d\n",user,c,user*c); //�L�X user*c = X �ô���
    }
    return 0; //�^�ǭ�0
}
