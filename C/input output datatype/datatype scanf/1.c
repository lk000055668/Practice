#include <stdio.h>  /*�ޤJ���Y��*/

int main() /*�D�禡*/
{
   double a,b; /*�ŧi�ܼ�a.b*/
   printf("��q(M):"); /*�L�X��q(M):*/
   scanf("%lf",&a);/*������J���ܼ�(double�ܼ�)�ñN��g��a��*/
   printf("�[�t��(A):");/*�L�X�[�t��(A):*/
   scanf("%lf",&b);/*������J���ܼ�(double)�ñN��g��b��*/
   printf("�~�O(F):%.1f %\n",a*b);/*�L�X�~�O(F):(�p��a*b)����ܨ�p���I�Ĥ@��*/
   return 0; /*�^�ǭ�0*/
}
