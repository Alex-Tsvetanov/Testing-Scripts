/** Author's note:
    1. Variables:
        A = amount of starting bacteria.
        B = how many are "added" each day.
        C = how many are removed each day.
        D = if remaining bacteria (after "adding" B and removing C) are more than this value, some are removed so that they are exactly this value.
        K = amount of days (times the process is repeated)
        bact = how many bacteria are at the end of each day
    2. if(bact > D && x > 0) then break:
        If the amount of bacteria after the first day is more than D, then why keep repeating? They'll always be more than D and then set to D.
        With this, there will be at most 999 (or 998?) repeats.
    3. Limits:
        0 <= A, B, C, D <= 1000;
        A <= D;
        1 <= K <= 10^18 **/

#include <iostream>

using namespace std;

long long A = 0, B = 0, C = 0, D = 0, K = 0, bact = 0;

int main()
{
    cin >> A >> B >> C >> D >> K;
    bact = A;
    for(long long x = 0; x < K && !(bact <= 0); x++)
    {
        bact += B;
        bact -= C;
        if(bact <= 0)
        {
            bact = 0;
            break;
        }
        if(bact > D)
        {
            bact = D;
            if(x > 0)
            {
                break;
            }
        }
    }
    cout << bact;
    return 0;
}

