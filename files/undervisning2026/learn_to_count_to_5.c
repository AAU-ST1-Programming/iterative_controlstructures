#include <stdio.h>
int main()
{
    int iterator;
    int N = 10000;

    for (iterator = 0; iterator < N; iterator += 7)
    {
        printf("tallet = %i\n", iterator);
        // print number
        if (iterator == 0)
        {
            continue;
        }
        if (iterator % 8 == 0)
        {
            break;
        }
    }
    return 0;
}
