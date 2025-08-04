#include <stdio.h>

int main()
{
    int a = 5;

    int *p = &a;
    int **q = &p;
    int ***r = &q;
    printf("value of a: %d\n", a);
    printf("value of a: %d\n", *p);
    printf("value of a: %d\n", *(*q));
    printf("value of a: %d\n", *(*(*r)));
    ***r = 12;
    printf("value of a: %d\n", a);
}