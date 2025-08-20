#include <stdio.h> /* printf, scanf */
int main()
{
    /* local variable definition */
    char c;

    do
    {
        printf("Tryk paa enten y/q: ");
        scanf(" %c",&c);

        switch (c)
        {
        case 'q':
        case 'Q':
            printf("... Farvel med dig.\n");
            break;
        case 'y':
        case 'Y':
            printf("... hej med dig.\n");
            break;
        default:
            printf("... Hvad vil du egentlig?\n");
        }

    } while (c!='q' && c!='Q' );
    
    
    return 0;
}
