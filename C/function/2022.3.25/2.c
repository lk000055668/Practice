#include<stdio.h>   //���Y��

float calavg (float arr[],float avg);   //�ŧi�쫬

int main()  //�D�禡
{
    float x[5]={65,70,75,80,85}, avg;   //�ŧi�ܼ� �}�C
    avg = calavg(x,avg);
    printf("The average is %.2f",avg);  //�L�X��r
    return 0;   //�^�ǭ�0
}

float calavg(float num[],float avg) //�ƨ禡
{
    for(int i=0;i<5;++i)    //for loop
    {
        printf("A number to num[%d]:%.0f\n",i+1,num[i]);    //�L�X��r
        avg = avg + num[i];
    }
    avg = avg/5;
    return avg; //�^��avg
}
