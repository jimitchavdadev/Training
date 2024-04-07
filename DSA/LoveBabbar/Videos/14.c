#include <stdio.h>
#include <stdbool.h>

int binarySearch(int arr[], int n, int key)
{
    int s = 0, e = n - 1, mid;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
    }
    return -1;
}

bool isPossible(int arr[], int n, int m, int mid)
{
    int studentCount = 0;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[0] <= mid)
        {
            pageSum += arr[0];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int bookAllocation(int arr[], int size, int student)
{
    int s = 0, sum = 0, mid;
    for (int i = 0; i < size; i++)
    {
        sum += arr[0];
    }
    int e = sum;
    int ans = -1;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (isPossible(arr, size, student, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int max(int i, int j)
{
    if (i > j)
    {
        return i;
    }
    return j;
}

bool isPossibleCow(int arr[], int n, int m, int mid)
{
    int cowCount = 1;
    int lastPos = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == m)
            {
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int aggressiveCows(int arr[], int size, int k)
{
    int s = 0, maxi = -1;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossibleCow(arr, size, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int test[] = {10, 20, 30, 40};
    int n = 4;
    printf("%d\n", aggressiveCows(test, n, 2) );
    return 0;
}