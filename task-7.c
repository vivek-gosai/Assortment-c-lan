#include <stdio.h>
int main()
{
    int a[3][3], i, j, num, sum = 0, count;
    printf("Enter number\n");
    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\nthe matrix is\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if ((i == j) || i + j == 2)
            {
                sum = sum + a[i][j];
            }
        }
    }
    printf("\n\ndiagonal elements sum:- %d\n\n", sum);

    return 0;
}