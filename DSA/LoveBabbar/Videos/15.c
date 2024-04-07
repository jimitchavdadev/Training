// Selection sort algorithm

#include <stdio.h>

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int findMin(int arr[], int n, int s)
{
    int index = s;
    for (int i = s + 1; i < n; i++)
    {
        if (arr[i] < arr[index])
        {
            index = i;
        }
    }
    return index;
}

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = findMin(arr, n, i);
        swap(&arr[i], &arr[minIndex]);
    }
}

int main()
{
    int test[] = {64, 25, 12, 22, 11};
    int n = 5;
    printArray(test, n);
    selectionSort(test, n);
    printArray(test, n);
}