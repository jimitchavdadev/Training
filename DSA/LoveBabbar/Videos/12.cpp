#include <iostream>

using namespace std;

int binarySearchIndex(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
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
    return -1;
}

int main()
{
    int test[] = {3, 7, 11, 13, 19, 27, 99};
    int n = 7;
    system("clear");
    cout << binarySearchIndex(test, n, 99) << endl;
    cout << "eveything is fine\n";
}