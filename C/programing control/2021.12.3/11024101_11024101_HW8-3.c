#include<stdio.h> //���Y��
#include<time.h> //���Y��
#include<stdlib.h> //���Y��

int main() //�D�禡
{
    int c,p,total; //�ŧic p total ����ܼ�
    srand(time(NULL)); //�]�w�üƺؤl�X
    total = 0; //�Ntotal�ᤩ��0
    printf("3�P8������:\n"); //�L�X 3�P8...�ô���
    for(c=1;c<=100;c++) //c�_�l��1 c<100?
    {
        p = rand()% 200 +1; //�N1-200���üƽᤩ��p
        if(p % 24 == 0) //p % 24 = 0?
        {
            printf("%d\n",p); //�L�Xp�� �ô���
            total = total + p; //�N total + p�ᤩ��total
        }
    }
    printf("100�ӶüƤ��A�P�ɬO3�P8�������`�M��:%d",total); //�L�X 100�Ӷü�...
    return 0; //�^�ǭ�0
}
