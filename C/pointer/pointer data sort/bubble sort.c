#include<stdio.h>       //���Y��
#define SIZE 5
void bubble_sort(int *ptr);     //�w�q�禡

int main()  //�D�禡
{
    int a[SIZE];        //�ŧi�}�C
    int *aptr = a;      //�ŧi����
    printf("�п�J 5 �Ӿ��:\n");     //�L�X��r
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);     //������J

    bubble_sort(aptr);      //�I�s�禡
    printf("�L�X�Ѥp��j���ƧǬO:\n");    //�L�X��r
    printf("%d %d %d %d %d",*aptr,*(aptr+1),*(aptr+2),*(aptr+3),*(aptr+4));     //�L�X��r
    return 0;
}

//�w�j�Ƨ�
void bubble_sort(int *arr)
{
    for (int i=0; i < SIZE-1; i++)
    {
        for (int j=0; j < SIZE-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

//�洫�ƭ�
void swap(int *x1, int * x2)
{
    int temp;
    temp = *x1;
    *x1 = *x2;
    *x2 = temp;
}
