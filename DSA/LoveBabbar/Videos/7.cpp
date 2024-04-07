#include <iostream>
#include <math.h>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    /*
        int ans = 0;
        int digit = 0;
        while (n != 0)
        {
            digit = n % 10;
            if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
            {
                ans = 0;
                break;
            }
            ans = ans * pow(10, 1) + digit;
            n = n / 10;
        }

        cout << ans << endl;

int m=n;
int mask=0;
while(m!=0){
    mask =(mask<<1)|1;
    m=m>>1;
}
int ans=(~n)&mask;

cout<<ans<<endl;
*/
    int i = 0;
    int test = n & (n - 1);

    if (test == 0)
    {
        cout << "power of 2" << endl;
    }
    else
    {
        cout << "not a power of 2" << endl;
    }
}