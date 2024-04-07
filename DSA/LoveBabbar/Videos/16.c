// bubble sort

#include <stdio.h>

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int main()
{

    int test[] = {10, 1, 7, 6, 14, 9};
    int n = 6;
    printArray(test, n);
    bubbleSort(test, n);
    printArray(test, n);
}