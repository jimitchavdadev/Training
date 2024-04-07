#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    /*
        int i = 1;
        while (i <= n)
        {
            int j = 1;
            while (j <= n)
            {
                cout << j;
                j++;
            }
            cout << endl;
            i++;
        }

        int i = 1;
        while (i <= n)
        {
            int j = 1;
            while (j <= n)
            {
                cout << n - j + 1;
                j++;
            }
            cout << endl;
            i++;
        }


    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count = count + 1;
            j++;
        }
        cout << endl;
        i++;
    }


    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j <= i)
        {
            cout << "*"
                 << " ";
            j++;
        }
        cout << endl;
        i++;
    }


    int i = 1;
    while (i <= n)
    {
        int j = 0;
        while (j < i)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    int i = 1, count = 1;
    while (i <= n)
    {
        int j = 0;
        while (j < i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }


    int i = 1, count = 1;
    while (i <= n)
    {
        int j = 0;
        count = i;
        while (j < i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    int i = 1, count = 1;
    while (i <= n)
    {
        int j = 0;
        count = n;
        while (j < i)
        {
            cout << count << " ";
            count--;
            j++;
        }
        cout << endl;
        i++;
    }

    char k = 'A';
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << k << " ";
            j++;
        }
        cout << endl;
        k++;
        i++;
    }

    char k = 'A';
    int i = 1, count = 0;
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << k << " ";
            count++;
            k = k + 1;
            count = k;
            j++;
        }
        k = count;
        cout << endl;
        i++;
    }


    int i = 0, count;
    char k = 'A';
    while (i < n)
    {
        count = i;
        k = k + count;
        int j = 0;
        while (j < n)
        {
            cout << k << " ";
            k++;
            j++;
        }
        k = 'A';
        cout << endl;
        i++;
    }

    int i = 0;
    char k = 'A';
    while (i < n)
    {
        int j = 0;
        while (j <= i)
        {
            cout << k << "";
            j++;
        }
        k++;
        cout << endl;
        i++;
    }

    int i = 0, count;
    char k = 'A';
    while (i < n)
    {
        k = 'A' + i;
        int j = 0;
        while (j <= i)
        {
            cout << k << "";
            k++;
            j++;
        }
        k = 'A';
        cout << endl;
        i++;
    }

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char k = 'A' + n - i;
        while (j <= i)
        {
            cout << k << " ";
            k++;
            j++;
        }
        i++;
        cout << endl;
    }

    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }

        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }

    int col = 0;
    while (col < n)
    {
        int row = n - col;
        while (row > 0)
        {
            cout << "*";
            row--;
        }
        cout << endl;
        col++;
    }
*/

    int row = 1;
    while (row <= n)
    {

        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }

        int j = 1;
        while (j <= row)
        {
            cout << j;
            j++;
        }
        int start = row - 1;
        while (start)
        {
            cout << start;
            start--;
        }
        cout << endl;
        row++;
    }
}