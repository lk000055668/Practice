#include<stdio.h>       //���Y��

int main()      //�D�禡
{
    float num[5];       //�ŧi�}�C
    float maxnum=0;     //�ŧi�p���ܼ�

    printf("�п�J5�ռƭ�:\n");       //�L�X�п�J..
    scanf("%f %f %f %f %f",&num[0],&num[1],&num[2],&num[3],&num[4]);        //������J���Ȩȩ̀ǥt���}�C������
    printf("�z��J���ƭȬ�:\n");       //�L�X�z��J...
    printf("%.1f %.1f %.1f %.1f %.1f",num[0],num[1],num[2],num[3],num[4]);      //�L�X�����ƭ�

    for(int i=0;i<=4;++i) //i<=4?
    {
        if(num[i]>maxnum) //max<num[i]?
            maxnum = num[i]; //�}�C�����Ƚᤩ��maxnum
    }
    printf("\n�z��J���̤j�ƭȬ�%.1f",maxnum);       //�L�X�z��J...

    return 0;       //�^�ǭ�0
}
