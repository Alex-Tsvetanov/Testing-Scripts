#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int rects[N][3]; // 0-xpos, 1-w, 2-h

    for (int i = 0; i < N; i++) {
        cin >> rects[i][1] >> rects[i][2];
        if (i == 0) rects[i][0] = 0;
        else {
            rects[i][0] = rects[i-1][0] + rects[i-1][1];
        }
    }

    int x, y;
    int res = 0;
    for (int i = 0; i < M; i++) {
        cin >> x >> y;
        for (int j = 0; j < N; j++) {
            if (x >= rects[j][0] && x <= rects[j][0] + rects[j][1] && y <= rects[j][2]) {
                res++;
                break;
            }
        }
    }

    cout << res << endl;

    return 0;
}