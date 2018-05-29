#include <stdio.h>

main()
{
    int num1, num2;

    printf("Enter two numbers\n");
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);
    printf("\nSum of numbers: %d", num1 + num2);
    printf("\nProizvedenie chisel: %d", num1 * num2);
    printf("\nRaznost' chisel: %d", num1 - num2);
    printf("\nChastnoe chisel: %d", num1 / num2);
    printf("\nMod of numbers: %d\n\n", num1 % num2);
    
    return 0;
}