#ifndef HWFOUR_H_INCLUDED
#define HWFOUR_H_INCLUDED
enum GROUP{ GROUP_A, GROUP_B};  //�C�|���O
void sortg(int x)
{
    enum GROUP group;   //�ŧigroup

    if(x%2 == 0)    //x % 2 =0?
        {
        group = GROUP_B;    //group ���� GROUP_B
        printf("�z�Ҧb���էO��GROUP_B");   //�L�X��r
        }
    else
    {
        group = GROUP_A;    //group ���� GROUP_A
        printf("�z�Ҧb���էO��GROUP_A");   //�L�X��r
    }
}

#endif // HWFOUR_H_INCLUDED
