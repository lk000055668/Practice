#include<stdio.h> /*���Y��*/

int main() /*�D�禡*/
{
    int year; /*�ŧiyear������ܼ�*/
    printf("�п�J�褸�~��:"); /*�L�X"�п�J�褸�~��:"*/
    scanf("%d",&year);  /*������J���ܼ� �åO�䬰year��*/

    if( year % 4 == 0) /*�Yyear��4���l�ƬO���s*/
        {
            if( year % 100 != 0 ) /*�Yyear��100���l�Ƥ�����0*/
                printf("�Ӧ~���|�~"); /*�L�X"�Ӧ~���|�~"*/
            else if( year % 400 == 0 ) /*�Yyear��400���l�Ƶ���0*/
                printf("�Ӧ~���|�~"); /*�L�X"�Ӧ~���|�~"*/
            else /*�Yyear��100���l�Ƥ�����s �ӱԭz�����u*/
                printf("�Ӧ~�����~"); /*�L�X"�Ӧ~�����~"*/
        }
    else /*�Yyear��4���l�ƬO���s �ӱԭz�����u*/
        printf("�Ӧ~�����~"); /*�L�X"�Ӧ~�����~"*/


    return 0; /*�^�ǭ�0*/
}

