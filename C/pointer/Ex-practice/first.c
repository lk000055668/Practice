#include<stdio.h>       //���Y��
//�w�q�禡���
void input(int*array1, int array_length);
void add (int*array1 , int *array2 , int *array3 , int array_length);

int main()
{
    //�ŧi�ܼ� ����
    int l=5;
    int arr1[5], arr2[5], sum[5]={0};
    int*pt1= &arr1, *pt2= &arr2, *pt3= &sum;

    //�L�X��r ������J
    printf("�п�Ja�}�C��5�Ӽƭ�\n");
    input(pt1, l);
    printf("�п�Jb�}�C��5�Ӽƭ�\n");
    input(pt2, l);
    printf("��}�C�ۥ[�����G��\n");

    add (pt1, pt2, pt3, l); //�I�s�禡
    //�L�X��r
    for(int i=0; i<l;++i){
    printf("%d ",*(pt3++));
    }

    return 0;

}

void input(int *pt,int s)
{
    //����������J
    for(int i=0; i<s; ++i)
        scanf("%d",pt++);
}

void add(int*pt1, int*pt2, int*pt3, int l)
{
    for(int i=0; i<l; ++i)
        *(pt3++) += *(pt1++) + *(pt2++);
}
