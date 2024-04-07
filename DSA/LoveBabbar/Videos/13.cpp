#include <iostream>

using namespace std;

/*
int leftMostOccurence(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid, ans = -1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
    }
    return ans;
}

int rightMostOccurence(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid, ans = -1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
    }
    return ans;
}

int peakMountainArray(int arr[], int n)
{
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            return mid;
        }
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        if (arr[mid] > arr[mid + 1])
        {
            end = mid;
        }
    }
    return -1;
}

int getPivot(int arr[], int n)
{
    int start = 0, end = n - 1, mid;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

int binarySearch(int arr[], int start, int end, int key)
{
    int mid, ans = -1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            break;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
    }
    return ans;
}

int getPosition(int arr[], int n, int key)
{
    int pivot = getPivot(arr, n);
    if (key >= arr[pivot] && key <= arr[n - 1])
    {
        return binarySearch(arr, pivot, n - 1, key);
    }
    else
    {
        return binarySearch(arr, 0, n - 1, key);
    }
}
*/

int squareRoot(int n)
{
    int s = 0, e = n, mid;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid > n)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int test[] = {8, 10, 17, 1, 3};
    int n = 99;
    system("clear");
    cout << squareRoot(n) << endl;
    cout << morePrecision(n, 3, squareRoot(n)) << endl;
    cout << "everything is fine\n";
}