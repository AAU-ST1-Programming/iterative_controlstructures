// opg 4a: argc fortæller hvor mange input variabler der er når man kalder funktionen.
// opg 4b: sti til programmet
// opg 4c: se for loop

#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("argc = %i\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("argv[%i]: %s\n", i, argv[i]);
        /* code */
    }

    /* code */
    return 0;
}
