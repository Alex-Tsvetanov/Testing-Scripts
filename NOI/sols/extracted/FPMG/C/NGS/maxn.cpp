#include <iostream>
using namespace std;

int power(int a, int b)
{
    int exit = 1;
    for(int i=b; i>0; i--)
    {
        exit = exit * a;
    }
    return exit;
}

int main()
{
    int n, num[30], onclock, againstclock, x, y, max=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> num[i];
    }
    for(int i=1; i<=n; i++)
    {
        int copy = n;
        x = power(10, copy-1);
        onclock = num[i]*x;
        if(i+1 > n)
        {
            for(int j=i+1-n; j<i; j++)
            {
                y = power(10, copy-2);
                onclock = onclock + num[j]*y;
                copy--;
            }
        }
        else
        {
            for(int j=i+1; j<=n+i-1; j++)
            {
                if(j<=n)
                {
                    y = power(10, copy-2);
                    onclock = onclock + num[j]*y;
                    copy--;
                }
                else
                {
                    y = power(10, copy-2);
                    onclock = onclock + num[j-n]*y;
                    copy--;
                }
            }
        }
        if(onclock >= max)
        {
            max = onclock;
        }
        int stopnum, firstnum, first, stop = 1, k=0;
        stopnum = onclock % 10;
        first = onclock / power(10, n-1);
        againstclock = onclock % power(10, n-1);
        while(stop != 0)
        {
            if(k==0)
            {
                againstclock = 10*(againstclock % power(10, n-2)) + againstclock / power(10, n-2);
                k++;
            }
            else
            {
                againstclock = (againstclock % power(10, n-2))%power(10, k) + ((againstclock % power(10, n-2))/power(10, k))*power(10, k+1) + (againstclock / power(10, n-2))*power(10, k);
                k++;
            }
            firstnum = againstclock / power(10, n-2);
            if(firstnum == stopnum)
            {
                stop = 0;
            }
        }
        againstclock = againstclock + first*power(10, n-1);
        if(againstclock >= max)
        {
            max = againstclock;
        }
    }
    cout << max << endl;
    return 0;
}
