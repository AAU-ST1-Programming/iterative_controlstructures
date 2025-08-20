#include <stdio.h>
int main()
{
    /* local variable definition */
    int i, j, count=0;

    for (i = 2; i < 100; i++)
    {
        /*if (i==23)
        {
            printf("### When i==23, we have been in the j codeblock %i times ###\n",count);
        }*/
        
        for (j = 2; j*j <= i; j++)
        {
            count++;
            if (!(i%j))
            {
                break; // if factor found, i is not prime
            }            
        }
        if (j*j > i)
        {
            printf("%i is prime.\n",i);
        }
                
    }
    
    return 0;
}
