#include <stdio.h>

int main()
{
    int a = 1025;
    int *p = &a;

    void *p0 = &a;
    printf("address is: %d\n", p);

    printf("address is: %d\n", p0);
}