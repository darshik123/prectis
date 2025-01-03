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

int swaping(int arr[], int m)
{
    int temp = arr[m - 1];
    arr[m - 1] = arr[0];
    arr[0] = temp;

    for (int i = 0; i < m; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[max];

    getdata(arr, max);
    swaping(arr, max);
}