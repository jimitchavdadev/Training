#include <iostream>
using namespace std;

/*
int nthTerm(int n)
{
    return (3 * n + 7);
}

int countSetBit(int a, int b)
{

    int count = 0;

    while (a != 0)
    {
        if (a & 1)
        {
            count++;
        }
        a = a >> 1;
    }

    while (b != 0)
    {
        if (b & 1)
        {
            count++;
        }
        b = b >> 1;
    }

    return count;
}


int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{
    int n;

    cout << "Enter the position in the Fibonacci sequence: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Invalid input. Position in the Fibonacci sequence should be non-negative." << endl;
    }
    else
    {
        int fiboTerm = fibo(n);
        cout << "Fibonacci term at position " << n << ": " << fiboTerm << endl;
    }

    return 0;
*/

void dummy(int n)
{
    n++;
    cout << "n is " + n << endl;
}

int main()
{
    int n;
    cin >> n;
    dummy(n);
    cout << "the value of n is " + n << endl;
    return 0;
}