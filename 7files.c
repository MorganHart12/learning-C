#include <stdio.h>
#include <string.h>

int main()
{
    char line[255];
    // FILE *fpointer = fopen("employees.txt", "w");

    // fprintf(fpointer, "Morgan, Manager \n John, Sales \n Adam, Accounting");

    // FILE *fpointer = fopen("employees.txt", "a");

    // fprintf(fpointer, " \n Gary, Gardener");

    FILE *fpointer = fopen("employees.txt", "r");

    fgets(line, 255, fpointer);
    printf("%s", line);

    fclose(fpointer);

    return 0;
}