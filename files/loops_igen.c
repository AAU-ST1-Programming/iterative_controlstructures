#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES /* giver adgang til M_PI i math.h */
#include <math.h>         /* M_PI */
int main()
{

    for (int i = 0;; i++)

    {
        if (i % 1000000 == 0)
        {
            printf("%i: %f\n", i, M_PI);
        }
    }
    return EXIT_SUCCESS; // EXIT_SUCCESS from stdlib.h
}
