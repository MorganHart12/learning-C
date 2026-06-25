#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int *a = malloc(sizeof(int) * 5);

    for (int i = 0; i < 5; i++)
        a[i] = i;

    for (int i = 0; i < 5; i++)
        printf("a[%d] = %d\n", i, a[i]);

    // realloc takes in the original pointer as an argument
    // and it returns a new pointer

    // printf("a before: %p\n");
    a = realloc(a, sizeof(int) * 10);
    // printf("a after: %p\n");

    // realoc does not delete whats in the space, it just
    // gives you a larger size of space allocacated

    /*
    printf("\n");
    for (int i = 5; i < 10; i++)
        a[i] = i;

    for (int i = 0; i < 10; i++)
        printf("a[%d] = %d\n", i, a[i]);
*/
    free(a);

    int *a1 = malloc(sizeof(int) * 5);
    int *a2 = malloc(sizeof(int) * 5);

    for (int i = 0; i < 5; i++)
        a1[i] = i;
    for (int i = 0; i < 5; i++)
        a2[i] = i;

    printf("a1: %p\n", a1);
    printf("a2: %p\n", a2);

    // because malloc stores onto the next available space,
    // the
    for (int i = 0; i < 14; i++)
        printf("a1[%d] = %d\n", i, a[i]);
    return 0;
}