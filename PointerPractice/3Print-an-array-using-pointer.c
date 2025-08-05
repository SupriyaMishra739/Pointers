#include <stdio.h>

// Q)Print an array using a pointer (without using []).

void printArray(int *p, int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("the element at the location %d is: %d\n", i, *(p + i));
    }
}

int main()
{

    int A[] = {1, 8, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);
    printArray(A, size);
}