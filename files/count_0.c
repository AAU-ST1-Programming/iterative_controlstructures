
#include <stdio.h>
int main()
{
    // for loop
    {
        printf("### For loop\n");
        for (int i = 10; i < 20; i++)
        {
            printf("value of i : %i\n", i);
        }
    }

    // while loop
    {
        printf("### While loop\n");
        int i = 10;

        while (i < 20)
        {
            printf("value of i : %i\n", i);
            i++;
        }
    }

    // do-while loop
    {
        printf("### do-while loop\n");
        int i = 10;
        do
        {
            printf("value of i : %i\n", i);
            i++;
        } while (i < 20);
    }

    // nested loop
    {
        printf("Nested loop!\n");
        int count = 10;
        for (int i = 0; i < count; i++)
        {
            for (int j = i * count; j < i * count + count; j++)
            {
                printf("%2i ", j);
            }
            printf("\n");
        }
    }
}
