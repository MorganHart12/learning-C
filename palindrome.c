#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool palindrome(char string[]);

int main(void)
{
    char string1[] = "not a palindrome";
    char string2[] = "abccba";
    char string3[] = "abcdcba";

    if (palindrome(string2))
        printf("%s\n- is a palindrome");
    else
        printf("%s\n- is not a palindrome");

    return 0;
}

bool palindrome(char string[])
{
    int middle = strlen(string) / 2;
    int len = strlen(string);

    for (int i = 0; i < middle; i++)
        if (string[i] != string[-i - 1])
            return false;

    return true;
}