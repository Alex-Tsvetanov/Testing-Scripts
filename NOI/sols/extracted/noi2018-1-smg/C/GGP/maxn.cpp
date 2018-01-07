#include <iostream>
using namespace std;
long long n;
long long ans;
long long c[32];
int main()
{
    ios_base::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> c[i];
    for (int i = 1; i <= n; i++)
    {
        long long curr_num = 0;
        for (int j = i; j >= 1; j--)
            curr_num = curr_num * 10 + c[j];
        for (int j = n; j > i; j--)
            curr_num = curr_num * 10 + c[j];
        ans = max(ans, curr_num);
        curr_num = 0;
        for (int j = i; j <= n; j++)
            curr_num = curr_num * 10 + c[j];
        for (int j = 1; j < i; j++)
            curr_num = curr_num * 10 + c[j];
        ans = max(ans, curr_num);
    }
    cout << ans << endl;
}
