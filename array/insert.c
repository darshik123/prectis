#include <stdio.h>
#include <stdlib.h>
#define n 5

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

int insertelement(int arr[], int m)
{
    int element;
    int index;
    printf("which index change:");
    scanf("%d", &index);
    printf("Enter element");
    scanf("%d", &element);
    if (index > m - 1)
    {
        printf("Enter valid index");
    }
    else
    {

        for (int i = m - 1; i >= index; i--)
        {
            arr[m + 1] = arr[m];
        }

        arr[index] = element;

        for (int i = 0; i < m; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[n];
    getdata(arr, n);
    insertelement(arr, n);
}