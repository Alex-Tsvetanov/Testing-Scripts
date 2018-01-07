#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;
    for(int i = 0; i < k ; i ++)
    {
        a = a * b - c;
        a = (a > d) ? d : a;
        if(a <= 0)
        {
            cout << 0 << endl;
            return 0;
         }
    }
    cout << a << endl;
}
