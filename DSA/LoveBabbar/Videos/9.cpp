#include <iostream>

using namespace std;

void sum(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    cout << sum << endl;
}

void printArray(int array[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void checkPowerTwo(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j = array[i];
        if ((j & (j - 1)) == 0)
        {
            cout << array[i] << " ";
        }
    }
    cout << endl;
}

void linearSearch(int array[], int size)
{
    int n, j;
    cin >> n;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == n)
        {
            cout << array[i] << " is present at " << i << " position ";
            j++;
        }
    }
    cout << endl;
    if (j == 0)
    {
        cout << "no such element is there" << endl;
    }
}

void reverseArray(int array[], int size)
{
    for (int i = 0; i < (size / 2); i++)
    {
        int temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
}

void reverseAlternateArray(int array[], int size)
{
    for (int i = 0; i < (size - 1); i = i + 2)
    {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }
}

int main()
{
    int array[] = {5, 8, 8, 128, 30, 69};

    /*
        int a[10]={};
        for(int i=0;i<10;i++){cout<<a[i];}
        cout<<endl;


    int great = array[0];
    for (int i = 0; i < 4; i++)
    {
        if (great < array[i])
        {
            great = array[i];
        }
    }
    cout << great << endl;

    int small = array[0];
    for (int i = 0; i < 4; i++)
    {
        if (small > array[i])
        {
            small = array[i];
        }
    }
    cout << small << endl;

    printArray(array, 4);

    sum(array, 4);

    checkPowerTwo(array, 4);

    linearSearch(array, 4);
*/
    reverseAlternateArray(array, 6);
    printArray(array, 6);
}