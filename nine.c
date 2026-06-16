#include <stdio.h>
#include <string.h>

void reverse_words(char *s)
{
    int len = strlen(s);
    int i = 0, j = 0;
    char temporary[100];

    for (i = 0; i < len; i++)
    {
        for (j = 0; i < len; j++, i++)
        {
            if (s[i] == ' ' || s[i] == '.')
                break;
            temporary[j] = s[i];
        }
        while (j > 0)
        {
            j--;
            s[i - j - 1] = temporary[j];
        }
    }
}

int main()
{
    char s[] = "hello world.";
    printf("%s\n", s);
    reverse_words(s);
    printf("%s\n", s);

    return 0;
}