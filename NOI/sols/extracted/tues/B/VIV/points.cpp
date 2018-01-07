#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int* figs = new int[n][2];
    int max_w, max_h;
    max_w = 0;
    max_h = 0;
    for (int i = 0;i < n;i++){
        int w, h;
        cin >> w >> h;
        max_w += w;
        if (h > max_h) {
            max_h = h;
        }

        figs[i][0] = w;
        figs[i][1] = h;
    }

    vector< vector<int> > points;
    for (int i = 0;i < m;i++){
        int x, y;
        cin >> x >> y;
        vector<int> cords;
        cords.push_back(x);
        cords.push_back(y);
        points.push_back(cords);
    }

    int total = 0;

    for (vector< vector<int> >::iterator it = points.begin(); it != points.end(); ++it) {
        if ((*it)[0] > max_w || (*it)[0] < 0 ||
            (*it)[1] > max_h || (*it)[1] < 0) {
                points.erase(it);
        }
    }

    int prev_w;
    for (vector< vector<int> >::iterator it = points.begin(); it != points.end(); ++it) {
        prev_w = 0;
        for (int i = 0;i < n; i++) {
            if ((prev_w <= (*it)[0] && (*it)[0] <= figs[i][0]+prev_w) && (*it)[1] <= figs[i][1]) {
                total+=1;
                break;
            }
            prev_w += figs[i][0];
        }
    }

    cout << total;
    return 0;
}
