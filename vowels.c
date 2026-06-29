#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int removevowels(char string[]);

int main(void)
{
    char string1[] = "hello";

    removevowels(string1);

    return 0;
}

int removevowels(char string[])
{
    int read = 0;
    int write = 0;
    char vowels[] = "aeiou";
    int lenvowels = strlen(vowels);
    // the while loop checks each character until it reaches null
    while (string[read] != '\0')
    {
        int i;
        // i is checked against all vowels
        for (i = 0; i < lenvowels; i++)
        {
            // if we find a vowel the inner loop breaks
            if (string[read] == vowels[i])
            {
                break;
            }
        }
        // if the loop finished without breaking, i will equal lenvowels
        // meaning no vowel was found
        if (i == lenvowels)
        {
            // the constant is written into the succesive position
            string[write] = string[read];
            // the position is moved one to the right
            write++;
        }
        read++; // the read position is moved one to the right
    }
    // again, this loops until the null terminator is reached
    string[write] = '\0';
    printf(string);
}