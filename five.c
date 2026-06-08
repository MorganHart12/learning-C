#include <stdio.h>
#include <string.h>

int main()
{

    int nums[3][2] = {
        {1, 2},
        {1, 2},
        {4, 5}};

    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d,", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}