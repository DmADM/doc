#include <stdio.h>
main()
{
    int number;

    printf("\nInput integer: ");
    scanf("%d", &number);
    if(number % 2 == 0)
        printf("%d is the even number", number);
    if(number % 2 != 0)
        printf("%d is the odd number", number);
    printf("\n\n");
    
    return 0;
}