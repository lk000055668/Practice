#include<stdio.h> /*���Y��*/

int main() /*�D�禡*/
{
    int x,y;                           /*�ŧi�ܼ� x,y*/
    printf("�п�JA�PB����:");         /*�L�X"�п�JA�PB����:"*/
    scanf("%d %d",&x,&y);              /*������J���ܼ� �ȩ̀ǥO�䬰x,y��*/


    if(x>y) /*�Yx>y*/
    {
        printf("%d>%d\n",x,y);         /*�L�X"(x��)>(y��)*/
        printf("A��B�j");              /*�L�X"A��B�j*/
    }

    if(x<y) /*�Yx<y*/
    {
        printf("%d<%d\n",x,y);        /*�L�X"(x��)<(y��)"*/
        printf("A��B�p");             /*�L�X"A��B�p"*/
    }

    if(x==y) /*�Yx=y*/
    {
        printf("%d=%d\n",x,y);       /*�L�X(x��)=(y��)*/
        printf("AB�@�ˤj");          /*�L�X"AB�@�ˤj"*/
    }

    return 0; /*�^�ǭ�0*/
}
