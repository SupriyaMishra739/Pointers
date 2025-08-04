#include <stdio.h>

int main()
{
    int a = 5;

    int *p;
    p = &a;
    printf("%d\n", p);
    printf("%d\n", sizeof(int));
    printf("%d\n", p + 1);
}