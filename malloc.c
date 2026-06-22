#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{

    // malloc allows us to request a block of memory on the heap

    int *a = malloc(sizeof(int) * 10);

    for (int i = 0; i < 10; i++)
        a[i] = 10 - i;

    for (int i = 0; i < 10; i++)
        printf("a[%d] = %d\n", i, a[i]);
    printf("\n");

    printf("a: %p\n", a);

    int *save = a;

    free(a);

    printf("save: %p\n", save);

    // while (1) memory_hog(1000000);

    return 0;
}

/*
void memory_hog(int size)
{
    int *a = malloc(size);
}
*/