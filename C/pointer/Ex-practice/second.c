#include<stdio.h>
void plus(int *data ,int add);

int main()
{
    int d[5],a;
    int*dptr = d;

    printf("�п�J 5 numbers:\n");
    //����������J
    for(int i=0; i<5;++i)
        scanf("%d",&d[i]);

    //�L�X�}�C
    printf("�I�s�禡���e�A�L�X�}�C\n");
    printf("data[5]:[");
    for(int i=0; i<5;++i){
        if(i!=4)
            printf("%d,",d[i]);
        else
            printf("%d]\n",d[i]);
    }
    //�����n�[�J���Ʀr
    printf("�п�J�A�Q�n�[���Ʀr:\n");
    scanf("%d",&a);
    //�禡�I�s
    plus(dptr,a);
    //�L�X��r
    printf("�I�s�禡����A�b�D�禡�L�X�}�Cdata[5]��:[");
    for(int i=0; i<5;++i){
        if(i!=4)
            printf("%d,",d[i]);
        else
            printf("%d]",d[i]);
    }
    return 0;
}
void plus(int*data,int a)
{
    //�v���W�[a
    for(int i=0; i<5; ++i){
        *(data++) += a;
    }
}
