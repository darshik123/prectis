#include <stdio.h>
#define max 3

int main()
{
    int arr[max] = {1, 5, 2};
    int size = 0;
    int pali = 0;
    for (int i = 0; i < max; i++)
    {
        size++;
    }

    printf("%d", size - 1);
    for (int i = 0; i < max / 2; i++, size--)
    {
        if (arr[i] == arr[size - 1])
        {
            pali = 1;
        }
        else
        {
            break;
        }
    }

    if (pali == 1)
    {
        printf("yesh");
    }
    else
    {
        printf("no");
    }
}