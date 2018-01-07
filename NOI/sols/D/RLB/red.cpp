#include<iostream>
using namespace std;

struct lr{
    int l;
    int r;
};
lr br[10000] = {0};

int main(){

    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    int a[n], b;
    for(int i = 0; i < n; i++)cin >> a[i];
    for(int i = 0; i < k; i++){
        cin >> b;
        for(int j = b; j < n; j++){
            if(a[j] == a[b - 1])br[i].r++;
        }
        for(int h = b - 2; h >= 0; h--){
            if(a[h] == a[b - 1])br[i].l++;
        }
    }
    for(int i = 0; i < k; i++){
        cout << br[i].l << " " << br[i].r << "\n";
    }

    return 0;
}
