/** Author's note:
    1. This took a lot of trial and error
    2. Variables:
        N = how many numbers there can be in the first (second) row
        K = how many numbers there can be in the second (third) row
        a[x] = a number
        b[x] = the position of the number in a[x] to compare the others to
        L[x] = how many numbers match on the left of a[b[x]]
        R[x] = how many numbers match on the right of a[b[x]]
    3. Limits:
        1 <= b[x] <= N <= 100000;
        0 <= a[x] <= 100000;
        1 <= K <= 10000 **/

#include <iostream>

using namespace std;

long long N, K;

int main()
{
    cin >> N >> K;
    long long a[N], b[K], L[K], R[K];
    for(long long x = 0; x < N; x++)
    {
        cin >> a[x];
    }
    for(long long x = 0; x < K; x++)
    {
        cin >> b[x];
        b[x]--;
        L[x] = 0;
        R[x] = 0;
    }
    for(long long x = 0; x < K; x++)
    {
        for(long long y = b[x] - 1; y >= 0; y--)
        {
            if(a[y] == a[b[x]])
            {
                L[x]++;
            }
        }
        for(long long y = b[x] + 1; y < N; y++)
        {
            if(a[y] == a[b[x]])
            {
                R[x]++;
            }
        }
    }
    for(long long x = 0; x < K; x++)
    {
        cout << L[x] << " " << R[x] << endl;
    }
    return 0;
}
