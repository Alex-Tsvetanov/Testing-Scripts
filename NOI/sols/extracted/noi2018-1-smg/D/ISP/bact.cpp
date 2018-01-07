#include<iostream>

using namespace std;

int main(){

    long long a, b, c, d, k, ans=0;
    cin >> a >> b >> c >> d >> k;
    ans=a;

    if(b==0){
        cout << 0 << '\n';
        return 0;
    }

    for(long long i=0; i<k; i++){
        ans*=b;
        ans-=c;
        if(ans<=0){
            cout << 0 << '\n';
            return 0;
        }
        if(ans>d){
            cout << d << '\n';
            return 0;
        }
    }


    cout << ans << '\n';

    return 0;
}
/*
1000 1000 1000 1000 1000000000000000000
*/
