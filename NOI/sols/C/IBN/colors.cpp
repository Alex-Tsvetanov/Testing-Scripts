#include <iostream>

using namespace std;

int cvetove [100200];

int main() {
    long long N, K, broi=0;
    cin >> N >> K;
    for (long long i = 0; i < N; ++i) {
        int buf;
        cin >> buf;
        if (cvetove[buf-1]==0) {
            ++broi;
        }
        ++cvetove[buf-1];
    }
    //cout << broi;
    if (broi>=K) {
        long long otpechatani = 0;
        for (long long i = 0; i < N; ++i) {
            if (cvetove[i]>0) {
                cout << i+1 << " ";
                ++otpechatani;
                if (otpechatani==K)
                    break;
            }
        }
        //cout << "aaa";
    }else{
        long long otpechatani = broi;
        for (long long i = 0; i < 25000; ++i) {
            if (cvetove[i]>0) {
                if (otpechatani+cvetove[i]-1>=K) {
                    for (long long j = 0; j < K-otpechatani+1; ++j) {
                        cout << i + 1 << " ";
                    }
                    otpechatani = K;
                }else{
                    for (long long j = 0; j < cvetove[i]; ++j) {
                        cout << i + 1 << " ";
                    }
                    otpechatani += cvetove[i]-1;
                }
            }
        }
    }
    cout << "\n";
}
