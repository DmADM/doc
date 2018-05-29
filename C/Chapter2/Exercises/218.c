#include <stdio.h>
main()
{
    int num1, num2;

    printf("\nEnter two integer numbers\n\n");
    printf("One: ");
    scanf("%d", &num1);
    printf("Two: ");
    scanf("%d", &num2);
    if(num1 > num2)
        printf("\n%d is larger", num1);
    if(num2 > num1)
        printf("\n%d is larger", num2);
    if(num1 == num2)
        printf("\nThese numbers are equal");
    
    printf("\n\n");
    return 0;
}