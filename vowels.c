#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int removevowels(char string[]);

int main(void)
{
    char string1[] = "hello";

    return 0;
}

int removevowels(char string[])
{
    int position = 0;
    int len = strlen(string);
    char temp[] = "";
    char vowels[] = "aeiou";

    while (string[position] != '\0')
    {
        for (int = 0; i < vowels; i++)
        {
            if (string[position] == i)
            {
                int newposition = position;
                while (string[newposition] != '\0')
                {
                    string[newposition] = string[newposition + 1];
                    newposition++;
                }
            }
            else
                position++;
        }
    }
}