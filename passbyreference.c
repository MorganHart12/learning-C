#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(int a, int b);
void swap2(int *a, int *b);

int main(void)
{
    int x = 5;
    int y = 10;
    swap(x, y);
    printf("x: %d\ny: %d\n", x, y);
    swap2(&x, &y);
    printf("x: %d\ny: %d\n", x, y);
    return 0;
}

void swap(int a, int b)
{
    // this function doesnt actually swap the values,
    // this is because we are "passing by values"
    // this means the actual variables of x and y dont change
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap2(int *a, int *b)
{
    // by using pointers we can directly access memory addresses

    int temp;
    // when i write temp = *a, a is dereferenced
    temp = *a;
    // when i write *a = *b, the value of b is stored in the
    // memory address of * a
    *a = *b;
    // finally, the value of temp is stored in the memory adress of b
    *b = temp;
}
