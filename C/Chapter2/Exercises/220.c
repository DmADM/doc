#include <stdio.h>
main()
{
    float radius;

    printf("\nInput Radius: ");
    scanf("%f", &radius);
    printf("\nDiameter: %f", radius * 2 );
    printf("\nPerimetr: %f", radius * (3.14159 * 2) );
    printf("\nSquare: %f", 2 * (3.14159 * radius) );
    printf("\n");

    return 0;
}