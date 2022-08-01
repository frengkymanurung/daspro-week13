#include <stdio.h>
#include <stdlib.h>
//do while
void cetak1D(int *arr, int l)
{
    int i = l;
    do
    {
        int idx = l - i;
        --i;
        printf("Array ke [%d], %d\n", idx, arr[idx]);
    } while (i > 0);
}
void main()
{
    int *arr;
    int i = 0;
    arr = (int *)malloc(5 * (sizeof(int)));
    for (i = 0; i < 5; i++)
    {
        arr[i] = i;
    }
    cetak1D(arr, 5);
    free(arr);
}
