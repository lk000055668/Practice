#include<stdio.h> /*���Y��*/

int main() /*�D�禡*/
{
    int num1; /*�ŧi�ܼ�*/
    printf("�п�J���@�Ʀr(1~100):"); /*�L�X"�п�J���@�Ʀr(1~100):*/
    scanf("%d",&num1);                /*������J���ܼ� �åO�䬰num1����*/
    printf("�]�`�e�׬�5:");           /*�L�X"�]�`�e�׬�5"*/
    printf("|%.5d|\n",num1);          /*�L�X"|(�e�׬�����num1�ƭ�)|"�ô���*/
    printf("�K�i�쬰:%o\n",num1);     /*�L�X"�K�i�쬰:(���num1���K�i���)"�ô���*/
    printf("�Q���i�쬰:%x",num1);     /*�L�X"�Q���i�쬰:(���num2���Q���i���)"*/

    return 0;  /*�^�ǭ�0*/
}
