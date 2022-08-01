#include <stdio.h>
#include <stdlib.h>
//do while
void cetak1D(int *arr, int l)
{
    int i = l;
    do
    {
        --i;
        printf("Array ke [%d], %d\n", i, arr[i]);
    } while (i > 0);
}
void main()
{
    int *arr;
    int i = 0;
    arr = (int *)malloc(4 * (sizeof(int)));
    for (i = 0; i < 4; i++)
    {
        arr[i] = i;
    }
    cetak1D(arr, 4);
    free(arr);
}
