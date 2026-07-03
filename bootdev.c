#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

float snek_score(int num_files, int num_contributors, int num_commits,
                 float avg_bug_criticality)
{
    int size_factor = num_files * num_commits;
    int complexity_factor = size_factor + num_contributors;
    float final_score = complexity_factor * avg_bug_criticality;
    return final_score;
}

char *get_temperature_status(int temp)
{
    char cold[] = "too cold";
    char hot[] = "too hot";
    char good[] = "just right";

    if (temp < 70)
    {
        return cold;
    }
    if (temp > 90)
    {
        return hot;
    }
    else
    {
        return good;
    }
}

int can_access_registry(int is_premium, int reputation, int has_2fa)
{
    int true = 1;
    int false = 0;
    if (is_premium == 1 || has_2fa == 1 && reputation >= 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void print_numbers_reverse(int start, int end)
{
    int i = start;
    while (i >= end)
    {
        printf("%d\n", i);
        i--;
    }
}

void print_numbers_reverse(int start, int end)
{
    do
    {
        printf("%d\n", start);
        start--;
    } while (start >= end);
}

int main(void)
{
    printf("sizeof(char)   = %zu\n", sizeof(char));
    printf("sizeof(bool)   = %zu\n", sizeof(bool));
    printf("sizeof(int)   = %zu\n", sizeof(int));
    printf("sizeof(float)   = %zu\n", sizeof(float));
    printf("sizeof(double)   = %zu\n", sizeof(double));
    printf("sizeof(size_t)   = %zu\n", sizeof(size_t));
}

return 0;
}