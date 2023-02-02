#include <stdio.h>

int main()
{

    int a[2][2][3] = {{{1, 2, 3}, {4, 5, 6}}, {{7, 8, 9}, {10, 11, 12}}};

    int sum = 0;

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            for (int k = 0; k < 3; k++)
            {

                printf("a[%d][%d][%d] = %d \n", i, j, k, a[i][j][k]);
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            for (int k = 0; k < 3; k++)
            {

                sum = sum + a[i][j][k];
            }
        }
    }

    printf("sum of three d array is = %d", sum);

    return 0;
}