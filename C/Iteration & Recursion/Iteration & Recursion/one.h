#ifndef HWONE_H_INCLUDED
#define HWONE_H_INCLUDED

void as(int x[])
{
    float avg,sig;      //�ŧi�ܼ�
    float sum;      //�ŧi�ܼ�
    for(int i=0;i<11;++i)
        sum = sum + x[i];   //�p���`�X
    avg = sum/10;

    for(int i=0;i<11;++i)
    {
        sig = sig+ (x[i]-avg)*(x[i]-avg);       //�p��зǮt����
    }

    printf("\n�����Ȭ��G\n");        //�L�X��r
    printf("%.2f\n",avg);       //�L�X��r
    printf("�зǮt���G\n");      //�L�X��r
    printf("%.2f",sqrt(sig));       //�L�X��r

}

#endif // HWONE_H_INCLUDED
