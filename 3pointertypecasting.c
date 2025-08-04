#include <stdio.h>

int main()
{
    int a = 1025;
    int *p = &a;

    printf("the value is: %d\n", a);
    printf("the p(address of a) is : %d\n", p);
    printf("the address of a is : %d\n", &a);
    printf("the address of p is: %d\n", &p);
    printf("the value is: %d\n", *p);

    printf("\n\n");

    char *p0;
    p0 = (char *)p;
    printf("the value is: %d\n", *p0);

    printf("the address  is : %d\n", p0);
    printf("the address of p0 is: %d\n", &p0);
    printf("Address =%d, value=%d\n", p0 + 1, *(p0 + 1)); 
}