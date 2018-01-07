#include<iostream>
using namespace std;
int main()
{
    int f, s;
    cin >> f >> s;
    int a = max(f,s);
    int b = min(f,s);
    int m;
    cin >> m;
    int arr[11];
    for(int i = 0; i < m; i++)
    {
        cin >> arr[i];

    }
    int br[11];
    for(int i = 0; i < m; i++)
    {
        int curr = arr[i];
        br[i] = 1;
        while(true)
        {
            if(curr > a)
            {
                if(    (curr - (4 * a) > b )
                   and (curr - (3 * a) - b > b)
                   and (curr - (2 * a) - (2 * b) > b)
                   and (curr - a - (3 * b) > b)
                   )
                {
                    curr -= a;
                    br[i]++;
                }
                else if(    (curr - (4 * b) > b )
                   and (curr - (3 * a) - b > b)
                   and (curr - (2 * a) - (2 * b) > b)
                   and (curr - a - (3 * b) > b)
                   )
                   {
                       curr -= b;
                       br[i]++;
                   }
                else
                {
                    break;
                }
            }
            else
                {
                    while(curr > b)
                    {
                        curr -= b;
                        br[i]++;
                    }
                }
                    }
    }
    for(int i = 0; i < m; i++)
    {
        if(br[i] % 2 == 1) cout << 2 << endl;
        if(br[i] % 2 == 0) cout << 1 << endl;
    }
    return 0;
}
