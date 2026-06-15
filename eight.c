#include <stdio.h>
#include <string.h>

int main()
{
    // "%[^\n]1000s" tells c to stop at 1000 characters to avoid breaking the program

    // char line[1000];
    // printf("enter line\n");
    // scanf("%[^\n]1000s", line);
    // printf("line: %s\n", line);

    // the loop reads everything up until the end of the file

    // char line[1000];
    // FILE *hand;
    // hand = fopen("romeo.txt", "r");
    // while (fgets(line, 1000, hand) != NULL)
    //{
    //     printf("%s", line);
    // }

    // loop ot increment by 1 from 0 til 5 is reached

    // int i;
    // for (i = 0; i < 5; i++)
    //{
    //    printf("%d\n", i);
    //}

    // find min and max
    // int first = 1;
    // int val, maxval, minval;

    // while (scanf("%d", val) != EOF)
    //{
    //     if (first || val > maxval)
    //         maxval = val;
    //     if (first || val < minval)
    //         minval = val;
    //    first = 0;
    // }
    // printf("maximum %d\n", maxval);
    // printf("minimum %d\n", minval);

    // nubmer guessing game

    // int guess;
    // printf("enter your guess:");

    // while (scanf("%d", &guess) != EOF)
    //{
    //    if (guess == 42)
    //   {
    //       printf("nice work\n");
    //       break;
    //   }
    //   else if (guess < 42)
    //       printf("too low guess again\n");
    //   else
    //      printf("too high guess again\n");
    //}

    // functions

    //   int mymult();
    //  int retval;

    // retval = mymult(6,7);
    // printf("answer: %d\n", retval);
}

// int mymult(a, b)
//  int a,b;
//{
//   int c = a * b;
//  return c;
//}