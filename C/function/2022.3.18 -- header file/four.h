#ifndef HWFOUR_H_INCLUDED
#define HWFOUR_H_INCLUDED
enum GROUP{ GROUP_A, GROUP_B};  //列舉型別
void sortg(int x)
{
    enum GROUP group;   //宣告group

    if(x%2 == 0)    //x % 2 =0?
        {
        group = GROUP_B;    //group 等於 GROUP_B
        printf("您所在的組別為GROUP_B");   //印出文字
        }
    else
    {
        group = GROUP_A;    //group 等於 GROUP_A
        printf("您所在的組別為GROUP_A");   //印出文字
    }
}

#endif // HWFOUR_H_INCLUDED
