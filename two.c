#include <stdio.h>
#include <string.h>
void sayHi(char name[])
{
    printf("Hello %s", name);
}

double cube(double num)
{
    double result = num * num * num;
    return result;
}

int max(int num1, int num2)
{
    int result2;
    if (num1 > num2)
    {
        result2 = num1;
    }
    else
    {
        result2 = num2;
    }

    return result2;
}

int switchstatements()
{
    char grade = 'A';
    switch (grade)
    {
    case 'A':
        printf("good score");
        break;
    case 'B':
        printf("good score");
        break;
    case 'C':
        printf("decent score");
        break;
    case 'D':
        printf("bad score");
        break;
    case 'F':
        printf("fail");
        break;
    default:
        printf("invalid grade");
    }
}

struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int whileloops()
{
    int index = 1;
    while (index <= 5)
    {
        printf("%d\n", index);
        index++;
    }
}

int main()
{
    sayHi("morgan");

    printf("Answer: %f", cube(3.0));

    printf("%d", max(4, 10));

    struct Student student1;
    student1.age = 19;
    student1.gpa = 3.2;
    strcpy(student1.name, "Morgan");
    strcpy(student1.major, "software engineering");

    struct Student student2;
    student2.age = 20;
    student2.gpa = 3.8;
    strcpy(student2.name, "John");
    strcpy(student2.major, "business");

    printf("%f", student1.gpa);

    return 0;
}
