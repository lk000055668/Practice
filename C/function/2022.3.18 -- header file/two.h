#ifndef HWTWO_H_INCLUDED
#define HWTWO_H_INCLUDED

void cal(float x,float y)
{
    float avg = (x+y)/2, pdt = x*y;     //�ŧi�ܼ�
    printf("AVERAGE(%.2f,%.2f)=%.2f\n",x,y,avg);    //�L�X��r
    printf("PRODUCT(%.2f,%.2f)=%.2f",x,y,pdt);    //�L�X��r
}

#endif // HWTWO_H_INCLUDED
