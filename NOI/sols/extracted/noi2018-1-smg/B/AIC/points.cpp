#include <iostream>
#include <vector>
#include <utility>

using namespace std;

vector < pair < int , int > > sections;

bool is_in (int x, int y)
{
    int from = 0, to = sections.size ();

    if (x > sections [to - 1].first)
        return false;

    while (from + 1 < to)
    {
        int mid = (from + to) / 2;
        if (sections [mid].first > x)
            to = mid;
        else
            from = mid;
    }
    //cout << from << " " << to << endl;
    if (x == sections [from].first)
        return y <= max (sections [from].second, sections [to].second);
//    else if (x < sections [from].first)
//        return y <= sections [from].second;
    else/// if (sections [from].first < x and x < sections [to].second)
        return y <= sections [to].second;
}

int main ()
{
    cin.tie (nullptr);
    ios::sync_with_stdio (false);
    int n, m;
    cin >> n >> m;
    int last_w = 0;
    while (n --)
    {
        int w, h;
        cin >> w >> h;

        if (last_w == 0)
            sections.push_back({last_w, h});

        last_w += w;
        sections.push_back({last_w, h});
    }

    int br = 0;

    while (m --)
    {
        int x, y;
        cin >> x >> y;
        //cout << "(" << x << "," << y << ") -> " << is_in (x, y) << "\n";
        br += is_in(x, y);
    }
    cout << br << endl;
}
