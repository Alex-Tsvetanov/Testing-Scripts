#include <iostream>
using namespace std;

int main()
{
    long long n, p, x;
    cin >> n >> p;
    for (long long i = 1, yes = 1; i<=n; i++)
    {
        yes = 1;
        for(long long k = i; k > 0; k = k / p)
        {
            x = k % p;
            if(x != 1 and x != 0)
            {
                yes = 0;
            }
        }
        if(yes == 1)
        {
            cout << i << endl;
        }
    }
    return 0;
}
