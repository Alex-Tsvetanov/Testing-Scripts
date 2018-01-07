#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

unsigned int br [1000000];
set <int> films;

int main ()
{
    cin.tie (nullptr);
    ios::sync_with_stdio (false);
    unsigned int n, m, T, L;
    cin >> n >> m >> T >> L;

    unsigned int ans = 0;
    for (int i = 0 ; i < n ; i ++)
    {
        unsigned int index;
        cin >> index;
        index --;
        films.insert (index);
        ans = max (ans, (++br [index])*(T+L));
    }
    if (films.size () > m)
    {
        vector < int > br_films;
        for (auto& x : films)
            br_films.push_back(x);
        sort (br_films.begin(), br_films.end (),
                  [&br](int a, int b)
                  {
                        return br [a] > br [b];
                  }
             );
        //for (auto& x : br_films)
        //    cout << x << " " << br [x] << endl;
        for (int i = 0 ; i < br_films.size () ; i ++)
        {
            //br [br_films [i]] += i / m;
            ans = max (ans, T * (i / m) + (T + L) * br [br_films[i]]);
        }
    }
    cout << ans << endl;
}
