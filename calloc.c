#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{

    // calloc can also be used but initialises all bytes to zero

    int *a = calloc(10, sizeof(int));

    for (int i = 0; i < 10; i++)
        a[i] = 10 - i;

    for (int i = 0; i < 10; i++)
        printf("a[%d] = %d\n", i, a[i]);
    printf("\n");

    printf("a: %p\n", a);

    int *save = a;

    free(a);

    printf("save: %p\n", save);

    // calloc may be used so that if the space is used
    // again like we do here, it is set to zero
    for (int i = 0; i < 10; i++)
        printf("a[%d] = %d\n", i, a[i]);
    printf("\n");

    // while (1) memory_hog(1000000);

    return 0;
}