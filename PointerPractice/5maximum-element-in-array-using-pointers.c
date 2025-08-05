#include <stdio.h>

// Q) Find the maximum element in an array using pointers.

int maxElementInArray(int *p, int size)
{
    int max = *p;

    for (int i = 1; i < size; i++)
    {
        p++; // Move to the next element
        if (*p > max)
        {
            max = *p;
        }
        }
    return max;
}

int main()
{
    int A[] = {1, 2, 3, 5, 0, 2};
    int size = sizeof(A) / sizeof(A[0]);
    int ans = maxElementInArray(A, size);
    printf("the max element is %d\n", ans);
}