#include <stdio.h> /*�ޤJ���Y��*/

int main() /*�D�禡*/
{
     double a,b,c;                         /*�Hdouble�ܼƫ��A�ŧia,b,c*/
     printf("�п�Ja���x���q:\n");         /*�L�X"�п�Ja���x���q:"�ô���*/
     scanf("%lf",&a);                      /*������J���ƭ� �åO�䬰a�� */
     printf("�п�Jb���x���q:\n");         /*�L�X"�п�Jb���x���q:"�ô���*/
     scanf("%lf",&b);                      /*������J���ƭ� �åO�䬰b�� */
     printf("�п�Jc���x���q:\n");         /*�L�X"�п�Jc���x���q:"�ô���*/
     scanf("%lf",&c);                      /*������J���ƭ� �åO�䬰c�� */
     printf("�`���q:%.lf %",a+b+c);        /*�L�X"�`���q:"*/
     return 0;                            /*�^�ǭ�0*/

}
