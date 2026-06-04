#include <stdio.h>

int main()

{
    int luckyNumbers[10] = {
        3,
        5,
        7,
        10,
        12,
    };
    luckyNumbers[0] = 50;
    printf("%d", luckyNumbers[0]);

    return 0;
}