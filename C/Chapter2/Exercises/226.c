#include <stdio.h>
main()
{
    int num1, num2;

    printf("\nEnter two numbers\n");
    printf("First: ");
    scanf("%d", &num1);
    printf("Second: ");
    scanf("%d", &num2);
    if(num1 % num2 == 0)
        printf("%d kratno %d", num1, num2);
    if(num1 % num2 != 0)
        printf("%d ne kratno %d", num1, num2);
    printf("\n\n");

    return 0;
}