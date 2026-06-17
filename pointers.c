#include <stdio.h>
#include <string.h>

int main()
{
    // 5 is variable x,

    int x = 5;

    // xp points to the memory address of x

    int *xp = &x;

    printf("a: %p\n", xp);

    // 42 is variable b

    int b = 42;

    // c is storing the memory address of b

    int *c = &b;

    printf("b: %d\n", b);
    printf("&b: %p\n", &b);
    printf("c: %p\n", c);

    // c can then be used to modify the value of b,
    // this is called dereferencing

    *c = 50;

    printf("b: %d\n", b);
    printf("&b: %p\n", &b);
    printf("c: %p\n", c);

    // this is useful as you can create functions
    // to modify multiple pointers at once

    // you can also allocate space for variables
    // as the program is running

    int d, f, g;

    // sets b and c back to 0

    d = f = g = 0;

    printf("enter 3 numbers");
    scanf("%d %d %d", &d, &f, &g);
    printf("result: %d\n", d + f + g);

    int x, y;
    x = 5;
    y = 10;
    swap(&x, &y);

    return 0;
}

// d is set to the memory address of x
// e is set to the memory address of y
void swap(int *d, int *e)
{
    int temp = 0;
    // d is dereferenced to temp
    temp = *d;
    // e is now set to the what d points to
    *d = *e;
    // to complete the swap, the temporary variable
    // is set to *e
    *e = temp;
}