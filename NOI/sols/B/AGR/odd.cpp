#include<iostream>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    bool ln = 0;
    bool mul = 1;
    bool sum = 0;
    bool c = 0;
    for(int i = 0; i < s.size(); i ++)
    {
        if(s[i] == '+')
        {
            mul &= ln;
            sum ^= mul;
            mul = 1;
            c = 0;
        } else if(s[i] == '*')
        {
            mul &= ln;
            c = 1;
        } else {
            ln = (s[i] - '0') % 2;
        }
    }
    mul &= ln;
    sum ^= mul;
    cout << sum << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i = 0; i < t; i ++)
    {
        solve();
    }
}
