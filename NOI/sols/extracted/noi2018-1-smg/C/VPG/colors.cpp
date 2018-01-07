#include <iostream>
#include <algorithm>
using namespace std;
int nums[25001];
int ans[50001];
int n, k;
int main () {
    cin >> n >> k;
    int r=0, br=0, a;
    for (int i=0;i<n;i++) {
        cin >> a;
        if (nums[a]==0) r++;
        nums[a]++;
    }
    int b=1;
    while (k>r) {
        for (int i=b;i<=25000;i++) {
            if (nums[i]>0) {
                b=i;
                while (nums[i]>0) {
                    if (k==r) break;
                    br++;
                    nums[i]--;
                    if (k==1) {
                        cout << i << endl;
                        return 0;
                    }
                    cout << i << ' ';
                    k--;
                }
                break;
            }
        }
        if (nums[b]==0) r--;
    }
    for (int i=b;i<=25000;i++) {
        if (nums[i]>0) {
            if (k==1) {
                cout << i << endl;
                break;
            } else cout << i << ' ';
            k--;
        }
    }
    return 0;
}
