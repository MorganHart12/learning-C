#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int occurrances(int array[],
                int length,
                int to_find)
{
    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (array[i] == to_find)
            count++;
    }
    printf("number of 5's found: %d\n", count);
    return count;
}

int main(void)
{
    int myarray1[] = {4, 9, 7, 6, 5, 8, 3, 2, 1, 5};
    int myarray2[] = {0, 0, 1, 1, 0, 2, 2, 3};

    int findarray1_5 = occurrances(myarray1,
                                   10,
                                   5);
    int findarray2_0 = occurrances(myarray2,
                                   8,
                                   0);

    printf("number of 5's found in array 1: %d\n", findarray1_5);
    printf("number of 0's found in array 2: %d\n", findarray2_0);
    return 0;
}