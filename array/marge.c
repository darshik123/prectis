#include <stdio.h>
#include <stdlib.h>
#define max 5
int getdata(int arr1[], int arr2[], int m)
{
    for (int i = 0; i < m; i++)
    {
        arr1[i] = (rand() % 10) + 1;
        arr2[i] = (rand() % 50) + 10;
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
}

int marge(int arr1[], int arr2[], int arr3[], int m)
{
    int index = 0;
    for (int i = 0; i < m; i++, index++)
    {
        arr3[index] = arr1[i];
    }

    for (int i = 0; i < m; i++, index++)
    {
        arr3[index] = arr2[i];
    }

    for (int i = 0; i < index; i++)
    {
        printf("%d ", arr3[i]);
    }
}

int main()
{
    int arr1[max];
    int arr2[max];
    int arr3[50];

    getdata(arr1, arr2, max);
    marge(arr1, arr2, arr3, max);
}