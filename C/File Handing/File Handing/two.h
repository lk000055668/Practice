#ifndef HWTWO_H_INCLUDED
#define HWTWO_H_INCLUDED

void cal(float x,float y)
{
    float avg = (x+y)/2, pdt = x*y;     //宣告變數
    printf("AVERAGE(%.2f,%.2f)=%.2f\n",x,y,avg);    //印出文字
    printf("PRODUCT(%.2f,%.2f)=%.2f",x,y,pdt);    //印出文字
}

#endif // HWTWO_H_INCLUDED
