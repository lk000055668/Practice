#include<stdio.h>   //���Y��
//�D�禡
int main()
{
    int a[5]={0}, b[5]={0};     //�ŧi�}�C
    int *aptr=a, *bptr=b;       //�ŧi����

    printf("�п�JA�}�C����:\n");      //�L�X��r
    scanf("%d %d %d %d %d",&a[0], &a[1], &a[2], &a[3], &a[4]);      //������J
    printf("�п�JB�}�C����:\n");      //�L�X��r
    scanf("%d %d %d %d %d",&b[0], &b[1], &b[2], &b[3], &b[4]);      //������J


    printf("��}�C�ۥ[���G��:\n");  //�L�X��r
    for(int i=0;i<5;++i)
        printf("%d ", *(aptr+i) + *(bptr+i) );  //�L�X��r

    return 0;
}
