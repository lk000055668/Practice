#include<stdio.h>       //���Y��

int main()      //�D�禡
{
    int f[6],q[6],total;        //�ŧi��}�Ctotal�ܼ�

    printf("�п�J6�ؤ��G���O������:\n");      //�L�X�п�J...
    scanf("%d %d %d %d %d %d",&f[0],&f[1],&f[2],&f[3],&f[4],&f[5]);     //������J���ܼƨȩ̀ǥt��f�}�C����
    printf("�п�J6�ؤ��G���O�ʶR���ƶq:\n");        //�L�X�п�J...
    scanf("%d %d %d %d %d %d",&q[0],&q[1],&q[2],&q[3],&q[4],&q[5]);     //������J���ܼ� �ȩ̀ǥt��q�}�C������

    for(int i=0;i<=5;++i)       //i<=5?
    {
        total = total + f[i] * q[i];    //total + f[i] * q[i] �ᤩ��total
    }
    printf("�`���欰%d",total);         //�L�X�`����
    return 0; //�^�ǭ�0
}
