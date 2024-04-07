#include <iostream>

using namespace std;

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

/*
// reverse the array from a specific index

void reverse_array(int arr[], int n, int m)
{
    int s = m, e = n - 1;
    while (s <= e)
    {
        swap(&arr[s], &arr[e]);
        s++;
        e--;
    }
}
reverse_array(test, n, 2);
print_array(test, n);
*/

/*
void merge(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int total = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[total] = arr1[i];
            total++;
            i++;
        }
        else
        {
            arr3[total] = arr2[j];
            total++;
            j++;
        }
    }

// it will fill the rest of the elements present

    while (i < n)
    {
        arr3[total] = arr1[i];
        total++;
        i++;
    }
    while (j < m)
    {
        arr3[total] = arr2[j];
        total++;
        j++;
    }
}
*/

/*
void move_zeroes(int arr[], int n)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(&arr[j], &arr[i]);
            i++;
        }
    }
}
*/

int main()
{
    int test[] = {0, 1, 0, 3, 12};
    int n = 5;
    print_array(test, n);
}