#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

set<int> myunique(vector<int> v, int n) {
    set<int> a;
    for (int i = 0;i < n;i++){
        a.insert(v[i]);
    }

    return a;
}

void remove_first(int k, vector<int> v, int n, set<int> a) {
    set<int>::iterator it=a.begin();
    int j = 0;
    for (int i = 0;i < n;i++){
        if (j == k) break;
        if (v[i] == *it) {
            v.erase(v.begin()+i);
            it++;
            j++;
        }
    }
}

int main()
{
    int n, m, T, L;
    cin >> n >> m >> T >> L;
    vector<int> films;

    for (int i = 0;i < n;i++){
        int j;
        cin >> j;
        films.push_back(j);
    }

    int total = 0;

    while (n!= 0) {
        set<int> a = myunique(films, n);
        int k = a.size();
        if (k <= m) {
            total += T;
            total += L;
            remove_first(k, films, n, a);
            n-=k;
        }else {
            total += T;
            total += L;
            remove_first(m, films, n, a);
            n-=m;
        }
    }

    cout << total;

    return 0;
}
