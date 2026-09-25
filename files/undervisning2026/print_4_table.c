#include <stdio.h>

int main()
{

    for (int iterator = 0; iterator < 100; iterator++)
    {
        if (iterator % 4 == 0)
        {
            printf("iterator = %i\n", iterator);
        }
    }

    for (int i = 0; i < 100; i += 4)
    {
        printf("i = %i\n", i);
    }
}