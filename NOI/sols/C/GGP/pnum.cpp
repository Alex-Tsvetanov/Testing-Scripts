#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long n, p;
vector <long long> v;
void gen(long long num)
{
    if (num > n) return;
    v.push_back(num);
    gen(num * p);
    gen(num * p + 1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin >> n >> p;
    gen(1);
    sort (v.begin(), v.end());
    int sz = v.size();
    for (int i = 0; i < sz; i++)
        cout << v[i] << endl;
}
