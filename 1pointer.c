#include <stdio.h>

int main()
{
    int a;
    int *p;
    a = 10;
    p = &a;
    printf("%d\n", p);
    printf("%d\n", *p);
    printf("%d\n", &a);

    // modifying the value of a using the pointer p
    *p = 12;

    printf("a=%d\n", *p);
}