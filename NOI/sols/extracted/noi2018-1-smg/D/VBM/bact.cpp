#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, k;
    int stop1 = 0, stop2 = 0;
    int curr = 0;

    cin >> a >> b >> c >> d >> k;
    if (a * b <= c)
    {
        cout << 0 << endl;
        return 0;
    }
    curr = a;
    for (int i = 0; i < k; i ++)
    {
        if (curr == 1 && b == 1 && c == 0)
        {
            cout << 1 << endl;
            return 0;
        }
        curr = curr * b;
        curr -= c;
        if (curr <= 0)
        {
            cout << 0 << endl;
            return 0;
        }
        if (curr > d)
        {
            curr = d;

            if (stop1 == i - 1)
            {
                cout << d << endl;
                return 0;
            }
            stop1 = i;
        }
    }
    cout << curr << endl;
    return 0;
}
