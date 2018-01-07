#include<iostream>
using namespace std;

int n;
int minR = 100;
int ans2, ans3;

int main()
{
    cin >> n;
    if (n % 3 == 0)
    {
        cout << 0 << ' ' << n / 3 << '\n';
        return 0;
    }
    for (int i = n / 3; i >= 0 ; i --)
    {
        int r2count;
        r2count = (n - i * 3) / 2;
        if (n - (i * 3 + r2count * 2)) { continue; }
        if (r2count + i <= minR)
        {
            minR = r2count + i;
            ans2 = r2count;
            ans3 = i;
        }
    }
    cout << ans2 << ' ' << ans3 << '\n';
    return 0;
}
