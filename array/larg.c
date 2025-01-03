#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 5
int getdata(int arr[], int m)
{

    srand(time(0));
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

int large(int arr[], int m)
{
    int larges = 0;
    for (int i = 0; i < m; i++)
    {
        if (arr[i] > arr[larges])
        {
            larges = i;
        }
    }

    printf("largest number of:%d", arr[larges]);
}

int main()
{
    int arr[max];

    getdata(arr, max);
    large(arr, max);
}