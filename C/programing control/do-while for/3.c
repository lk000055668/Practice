#include<stdio.h> //���Y��
#include<stdlib.h> //���Y��
#include<time.h>  //���Y��

int main() //�D�禡
{
    srand(time(NULL)); //�]�w�üƺؤl�X

    int D,ins,x,d; //�ŧiD ins  x d����ܼ�
    d = 1;  //�ᤩ1��d
    printf("�п�J�ݨD�q(300~800�c):"); //�L�X �п�J�ݨD�q(300~800�c):
    scanf("%d",&D); //������J���ܼ� �åO�䬰D

    while(ins <= D) //��ins <=D�� ����j��
    {
        x = rand() % 200 + 1; //�Nx�t�� 1~200���ܼ�
        printf("��%d�� �Ͳ�%d�c\n",d,x); //�L�X ��X�� �Ͳ�X�c �ô���
        ins = ins + x; // �Nx�ȥ[�J��ins
        printf("�ثe�@%d�c\n",ins); //�L�X�ثe�@X�c �ô���
        d++;
    }
    printf("�ŦX�ثe�ݨD�q\n"); //�L�X �ŦX�ثe�ݨD�q �ô���
    printf("�w�s�|��%d�c",ins-D); //�L�X�w�s�|��(���ins-D)�c
}
