#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, m;
    cin >> a >> b >> m;

    int game[10];
    int gcd = (a*b)/NOK(a, b);
    for(int i = 0; i < m; i++){
        cin >> game[i];
        if(b > a)
            swap(a, b);
        if(game[i] < b){
            cout << "2\n";
        }else if(2*b > a){
            if(game[i] % (a+b) < b){
                cout << "2\n";
            }else{
                cout << "1\n";
            }
        }else{
            if(game[i] % (a+b) >= a || ((game[i] % (a+b))/b) % 2 == 1){
                cout << "1\n";
            }else{
                cout << "1\n";
            }
        }
    }
}
