#include <stdio.h>

int main()
{
    int a[100], b[100], c[100], d[100];
    int i=0, j=0;
    float total[100] = {0.0};

    FILE *fptr;
    fptr = fopen("student.txt", "r");
    if(fptr == NULL)
        printf("Can't open the file.\n");

    while(fscanf(fptr, "%d%d%d%d", &a[i], &b[i], &c[i], &d[i]) != EOF)
    {
        i++;
    }

    fclose(fptr);

    FILE *fptr1;
    fptr1 = fopen("student.txt", "w");

    fprintf(fptr1, "\n\n===================================\n");

    for(j=0;j<i;j++)
    {
        total[j]=b[j]+c[j]+d[j];
        fprintf(fptr1, "ID¡G%-11d Score¡G %-11.2f Average¡G%-11.2f\n", a[j], total[j], total[j]/3);
    }

    fclose(fptr1);

    return 0;
}
