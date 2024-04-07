// insertion sort
#include <stdio.h>

int printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

int insertionSort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{

    int test[] = {4, 12, 11, 20};
    int n = 4;
    printArray(test, n);
    insertionSort(test, n);
    printArray(test, n);
}