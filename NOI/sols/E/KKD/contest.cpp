#include<iostream>
using namespace std;

int n, t, f, x;
int mn;

int main()
{
    cin >> n >> t >> f >> x;
    n -= f;
    mn = (t - 1) * 60;
    if (x * n == mn)
    {
        cout << "EXACT!" << '\n';
    }
    if (x * n < mn)
    {
        cout << "YES" << '\n';
        cout << mn - x * n << '\n';
    }
    if (x * n > mn)
    {
        cout << "NO" << '\n';
        cout << ((n - mn / x) * x) - (mn - (mn / x) * x) << '\n';
        cout << n - mn / x << '\n';
    }
    return 0;
}
