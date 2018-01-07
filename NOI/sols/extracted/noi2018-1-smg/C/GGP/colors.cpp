#include <iostream>
#include <algorithm>
#include <vector>
#define MAXN 100003
using namespace std;
int n, k;
int arr[MAXN];
vector <int> ans;
vector <pair <int, int> > el;
int main()
{
    ios_base::sync_with_stdio(false);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    sort (arr+1, arr+n+1);
    int curr_cnt = 1;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == arr[i-1]) curr_cnt++;
        else
        {
            el.push_back(make_pair(arr[i-1], curr_cnt));
            curr_cnt = 1;
        }
    }
    el.push_back(make_pair(arr[n], curr_cnt));
    int sz = el.size();
    int bonus = k - sz;
    int cnt = 0;
    for (int i = 0; i < sz; i++)
    {
        if (cnt == k) break;
        ans.push_back(el[i].first);
        cnt++;
        int gr = min(el[i].second-1, bonus);
        for (int j = 1; j <= gr; j++)
        {
            bonus--;
            cnt++;
            ans.push_back(el[i].first);
        }
    }
    cout << ans[0];
    sz = ans.size();
    for (int i = 1; i < sz; i++)
        cout << " " << ans[i];
    cout << endl;
}
