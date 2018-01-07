#include<iostream>
using namespace std;

int main(){
    int a, b, m;
    cin >> a >> b >> m;
    if(a > b) swap(a, b);
    int ans[m];
    for(int i = 0; i < m; i++){
        int stars;
        cin >> stars;
        int counter = 0;
        while(b < stars){
            stars -= b;
            counter++;
        }
        while(a < stars){
            stars -= a;
            counter++;
        }
        if(counter %2 == 0) ans[i] = 2;
        else ans[i] = 1;
    }
    for(int i = 0; i < m; i++){
        cout << ans[i] << endl;
    }




return 0;
}
