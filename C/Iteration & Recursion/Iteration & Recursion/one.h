#ifndef HWONE_H_INCLUDED
#define HWONE_H_INCLUDED

void as(int x[])
{
    float avg,sig;      //宣告變數
    float sum;      //宣告變數
    for(int i=0;i<11;++i)
        sum = sum + x[i];   //計算總合
    avg = sum/10;

    for(int i=0;i<11;++i)
    {
        sig = sig+ (x[i]-avg)*(x[i]-avg);       //計算標準差平方
    }

    printf("\n平均值為：\n");        //印出文字
    printf("%.2f\n",avg);       //印出文字
    printf("標準差為：\n");      //印出文字
    printf("%.2f",sqrt(sig));       //印出文字

}

#endif // HWONE_H_INCLUDED
