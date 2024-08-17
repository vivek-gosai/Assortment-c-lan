#include <stdio.h>

int main()
{
    int i, num[5];
    printf("Enter your number\n");
    for (i = 0; i <= 4; i++)
    {

        scanf("%d", &num[i]);
    }
    printf("\n\nAll your numbers \n");

    for (i = 0; i <= 4; i++)
    {

        printf("%d\n", num[i]);
    }

    printf("\n\nYour Negative numbers\n");

    for (i = 0; i <= 4; i++)
    {
        if (num[i] < 0)
        {
            printf("%d\n", num[i]);
        }
    }
    return 0;
}