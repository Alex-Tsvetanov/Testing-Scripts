#include <iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;

    int a[n];
    int b[k];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int j = 0; j < k; j++){
        cin >> b[j];
    }
    return 0;
}
