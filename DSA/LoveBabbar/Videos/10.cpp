#include <iostream>

using namespace std;

/*
void swapAlternateArray(int array[], int size)
{
    for (int i = 0; i < size - 1; i = i + 2)
    {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }
}

void occurOnceOnly(int array[], int size)
{
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (i != j && array[i] == array[j])
            {
                count++;
                break; // No need to check further for this element
            }
        }

        if (count == 0)
        {
            cout << array[i] << endl;
            return; // Found the unique element, so no need to continue
        }
    }

    cout << "No unique element found." << endl;
}

int checkDuplicate(int array[], int size)
{
    int ans = -1;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] = array[j])
            {
                ans = array[j];
                break;
            }
        }
        if (ans == -1)
        {
        }
    }
    return ans;
}

void allDuplicate(int array[], int size) {
    for (int i=0; i<size;i++){
        for(int j=i+1;j<size;j++){
            if (array[i]==array[j]){
                cout<<array[i]<<" ";
            }
        }
    }
    cout<<endl;
}

void Intersection(int array1[],int array2[],int size1, int size2){
    cout<<"the duplicate elements are: ";
    for (int i=0; i<size1; i++){
        for(int j=0; j<size2;j++){
            if(array1[i]==array2[j]){
                cout<<array1[i]<<" ";
            }
        }
    }
    cout<<endl;
}

void pairSum(int array[], int size, int sum)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] + array[j] == sum)
            {
                cout << array[i] << " " << array[j];
                cout << endl;
            }
            else
            {
                continue;
            }
        }
    }
}

void tripletSum(int array1[], int size1, int array2[], int size2, int array3[], int size3, int sum)
{

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            for (int k = 0; k < size3; k++)
            {
                if (array1[i] + array2[j] + array3[k] == sum)
                {
                   cout << array1[i] << " " << array2[j] << " " << array3[k];
                    cout << endl;
                }
                else
                {
                    continue;
                }
            }
        }
    }
}

void sort0_1(int array[], int size)
{
    int zeroes = 0, ones = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == 0)
        {
            zeroes = zeroes + 1;
        }
        else
        {
            ones = ones + 1;
        }
    }
    for (int i = 0; i < (zeroes); i++)
    {
        array[i] = 0;
    }
    for (int i = 0; i < ones + 1; i++)
    {
        array[size - i] = 1;
    }
    cout << endl;
}
*/

void sort0_1_2(int array[], int size)
{
    int zeroes = 0, ones = 0, twos = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == 0)
        {
            zeroes = zeroes + 1;
        }
        else if (array[i] == 1)
        {
            ones = ones + 1;
        }
        else
        {
            twos = twos + 1;
        }
    }
    for (int i = 0; i < (zeroes); i++)
    {
        array[i] = 0;
    }
    for (int i = zeroes; i < zeroes + ones; i++)
    {
        array[i] = 1;
    }
    for (int i = zeroes + ones; i < size; i++)
    {
        array[i] = 2;
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[] = {0, 0, 2, 0, 1, 1, 0, 2, 2};
    cout << "original array:\n";
    printArray(array, 9);
    cout << "after operation:\n";
    sort0_1_2(array, 9);
    printArray(array, 9);
}