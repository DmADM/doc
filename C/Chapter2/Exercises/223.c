#include <stdio.h>
main()
{
    int n1, n2, n3, n4, n5;

    printf("\nEnter five numbers: ");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
    if(n1 > n2)
        if(n1 > n3)
            if(n1 > n4)
                if(n1 > n5)
                    printf("%d is larger", n1);
    if(n2 > n1)
        if(n2 > n3)
            if(n2 > n4)
                if(n2 > n5)
                    printf("%d is larger", n2);
    if(n3 > n2)
        if(n3 > n1)
            if(n3 > n4)
                if(n3 > n5)
                    printf("%d is larger", n3);
    if(n4 > n2)
        if(n4 > n3)
            if(n4 > n1)
                if(n4 > n5)
                    printf("%d is larger", n4);
    if(n5 > n2)
        if(n5 > n3)
            if(n5 > n4)
                if(n5 > n1)
                    printf("%d is larger", n5);
    printf("\n");
    if(n1 < n2)
        if(n1 < n3)
            if(n1 < n4)
                if(n1 < n5)
                    printf("%d is lesser", n1);
    if(n2 < n1)
        if(n2 < n3)
            if(n2 < n4)
                if(n2 < n5)
                    printf("%d is lesser", n2);
    if(n3 < n2)
        if(n3 < n1)
            if(n3 < n4)
                if(n3 < n5)
                    printf("%d is lesser", n3);
    if(n4 < n2)
        if(n4 < n3)
            if(n4 < n1)
                if(n4 < n5)
                    printf("%d is lesser", n4);
    if(n5 < n2)
        if(n5 < n3)
            if(n5 < n4)
                if(n5 < n1)
                    printf("%d is lesser", n5);
    printf("\n\n");

    return 0;
}