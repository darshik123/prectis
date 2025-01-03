#include <stdio.h>
#include <stdlib.h>
#define max 5

int getdata(int arr[], int m)
{
    for (int i = 0; i < m; i++)
    {
        arr[i] = (rand() % 50) + 10;
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int revers(int arr[], int m)
{
    for (int i = m - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[max];

    getdata(arr, max);
    revers(arr, max);
}