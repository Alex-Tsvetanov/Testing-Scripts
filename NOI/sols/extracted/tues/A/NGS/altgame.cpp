#include <iostream>
#include <vector>
#include <list>

using namespace std;

int gameplay(int, int, int);

int main() {
    int a, b;
    int m;
    vector<int> stars;

    cin >> a;
    cin >> b;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int n;
        cin >> n;
        stars.push_back(n);        
    }

    for (int i = 0; i < m; i++) {
        int winner = gameplay(a, b, stars[i]);
        cout << winner <<  endl;
    }

    return 0;
}

int gameplay(int a, int b, int stars) {
    int min_num = min(a, b);
    int max_num = max(a, b);
    int moves = 0;

    while (stars > min_num) {
        if (stars < max_num && stars >= min_num) {
            stars -= min_num;
        } else {
            if (stars < max_num) {
                stars -= min_num;
            } else {
                stars -= max_num;
            }
        }
        moves++;
    }

    return (moves % 2) ? 1 : 2;
}
