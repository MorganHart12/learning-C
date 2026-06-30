#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct Student
{
    char name[50];
    char id[10];
    int age;
    int grades[5];
};

int main(void)
{
    // a struct is a record of information
    //  it's like an object, where multiple peices of data are attributed
    //  to the struct, these are called members

    struct Student morgan;

    strcpy(morgan.name, "morgan");

    strcpy(morgan.id, "123");

    morgan.age = 19;

    morgan.grades[0] = 1;
    morgan.grades[1] = 2;
    morgan.grades[2] = 3;
    morgan.grades[3] = 4;
    morgan.grades[4] = 5;

    printf("name: %s\n", morgan.name);
    printf("id: %s\n", morgan.id);
    printf("age: %d\n", morgan.age);
    printf("grades:");
    for (int i = 0; i < 5; i++)
        printf("%d", morgan.grades[i]);
    printf("\n");
    return 0;
}
