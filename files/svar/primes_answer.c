#include <stdio.h>

int main()
{
    /* Local variable definition */
    int i, j, counter = 0;

    for (i = 2; i < 100; i++)
    {
        for (j = 2; j*j <= i; j++)
        {
            counter++;
            if (!(i % j))
            {
                break; // if factor found, not prime
            }
        }
        if (j*j > i)
        {
            printf("%i is prime\n");
        }
    }

    return 0;
}
