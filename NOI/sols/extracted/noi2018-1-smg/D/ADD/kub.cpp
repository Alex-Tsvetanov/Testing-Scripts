#include <iostream>

using namespace std;

long long m[8];

int pol(int a)
{
    if(a <= 0)
        return 0;
    return a;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int q = 0;
    if(a < 2) q++;
    if(b < 2) q++;
    if(c < 2) q++;
    int ta = pol(a - 2), tb  = pol(b - 2), tc = pol(c - 2);
    m[0] = ta * tb * tc;
    m[1] = (ta * tb + ta * tc + tb * tc) * 2;
    m[2] = 4 * (ta + tb + tc) / (1 << pol(q));
    m[3] = a * b * c - m[2] - m[0] - m[1];
    int last = 3;
    for(int i = 0; i < q; i ++)
    {
        for(int j = last; j >= 0; j --)
            m[j + 1] = m[j];
        last ++;
    }
    for(int i = 0; i < 7; i ++)
    {
        cout << m[i] << " ";
    }
    cout << endl;
}
