#include <iostream>
using namespace std;

bool used[100001];
/*
3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int stak[n];
    bool done = false;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < n; j++){
            cin >> stak[j];
            used[j] = false;
            done = false;
        }
        for(int j = 0; j < n; j++){
            int current = stak[j];
            int next = stak[j+1];
            used[current] = true;
            if(current - next >= 2 && current - next >= 0){
                int k = next + 1;
                for(; k < current; k++){
                    if(!used[k]){
                        cout << "0\n";
                        done = true;
                        break;
                    }
                }
            }
        }
        if(!done){
            cout << "1\n";
        }
    }
}
