#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c;
    int ans = 0;
    int mass[3];

    cin >> a >> b >> c;
    mass[0] = a;
    mass[1] = b;
    mass[2] = c;
    sort(mass + 0, mass + 3);
    a = mass[0];
    b = mass[1];
    c = mass[2];
    if (a >= 2 && b >= 2 && c >= 2)
    {
        cout << (a - 2) * (b - 2) * (c - 2) << " ";
    }
    else
    {
        cout << 0 << " ";
    }

    ans = 0;
    if (b > 1 && c > 1)
    {
        ans += (b - 2) * (c - 2) * 2;
    }
    cout << ans << " ";


    ans = 0;
    if (a > 1 && c > 1)
    {
        ans += (c - 2) * 4;
    }
    if (b > 1 && a > 1)
    {
        ans += a * (b - 2) * 2;
    }
    cout << ans << " ";

    ans = 0;
    if (a > 1 && b > 1 && c > 1)
    {
        ans += 8;
    }
    if (a == 1 && c >= 2 && b >= 2)
    {
        ans += (c - 2) * 2 + 2;
    }
    cout << ans << " ";


    ans = 0;
    if (a == 1 && b == 1 && c >= 2)
    {
        ans += (c - 2);
    }
    if (a == 1 && b > 1 && c > 1)
    {
        ans += 4;
    }
    cout << ans << " ";


    ans = 0;
    if (a == 1 && b == 1 && c >= 2)
    {
        ans += 2;
    }
    cout << ans << " ";


    if (a == 1 && b == 1 && c == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}
