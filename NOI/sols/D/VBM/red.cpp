#include <iostream>

using namespace std;

bool mass[10000][10000];
int p[100000];
int q[100000];
int ans1, ans2;
int Nmb, k;
int answer[100000][2];

int main()
{
    int N, K;

    cin >> N >> K;
    for (int i = 0; i < N; i ++)
    {
        cin >> p[i];
        mass[p[i] - 1][i] = true;
    }
    for (int i = 0; i < K; i ++)
    {
        cin >> q[i];
        Nmb = p[q[i] - 1];
        ans1 = 0;
        ans2 = 0;
        for (int j = 0; j < 1000; j ++)
        {
            if (mass[Nmb - 1][j])
            {
                if (q[i] - 1 < j)
                {
                    ans2 ++;
                }
                else if (q[i] - 1 > j)
                {
                    ans1 ++;
                }
            }
        }
        answer[k][0] = ans1;
        answer[k][1] = ans2;
        k ++;
    }
    for (int i = 0; i < K; i ++)
    {
        cout << answer[i][0] << " " << answer[i][1] << endl;
    }
    return 0;
}
