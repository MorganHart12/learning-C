#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *string_append(char *s1, char *s2);

int main(void)
{
    char s1[] = "abc";
    char s2[] = "wxyz";

    char *s = string_append(s1, s2);
    printf("s: %s\n", s);

    free(s);

    return 0;
}

// if s1 = "abc"
//
// a b c \0     <-- data
// 0 1 2 3      <-- indexes
// not including null terminator, s1_length =  3
//
// if s2 = "wxyz"
//
// w x y z \0    <-- data
// 0 1 2 3 4     <-- indexes
// not including null terminator, s2_length = 4
//
// so for a combination of both strings, the string
// must have 7 indexes +1 for the null terminator = 8
// 0 1 2 3 4 5 6 7
// a b c w x y z \0

char *string_append(char *s1, char *s2)
{
    int s1_length = strlen(s1);
    int s2_length = strlen(s2);
    int size = s1_length + s2_length + 1;
    char *s = calloc(size, sizeof(char));

    // each letter of s1 is copied in
    for (int i = 0; i < s1_length; i++)
        s[i] = s1[i];

    // each letter of s2 is copied in following
    // from where s1 terminated

    for (int i = 0; i < s2_length; i++)
        // this will work out the location to copy each letter
        // eg: 3 + 0 = 3 so w will go in index 3,
        // 3 + 1 = 4 so x will go in index 4.

        s[s1_length + i] = s2[i];

    // finally we put in the null terminator
    s[size - 1] = '\0';

    return s;
}