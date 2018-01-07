#include <iostream>

using namespace std;

int a[100000], b[100000], k, n;

int main()
{
    cin >> n >> k;
    for(int i = 0; i < n; i ++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < k; i ++)
    {
        cin >> b[i];
    }
    for(int i = 0; i < k; i ++)
    {
        int l = 0, r = 0;
        for(int j = 0; j < n; j ++)
        {
            if(a[j] == a[b[i] - 1] && j != (b[i] - 1))
            {
                if(j < b[i] - 1)
                    l ++;
                else
                    r ++;
            }
        }
        cout << l << " " << r << endl;
    }
}
