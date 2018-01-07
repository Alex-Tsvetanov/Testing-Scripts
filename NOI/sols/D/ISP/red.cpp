#include<iostream>

using namespace std;

const long long MAX_N=100003;

long long numbers[MAX_N], left1[MAX_N], right1[MAX_N];

int main(){

    cin.tie();
    ios_base::sync_with_stdio(false);

    long long n, k;
    cin >> n >> k;

    for(long long i=0; i<n; i++){
        cin >> numbers[i];
        //cout << numbers[i] << '\t';
        for(long long j=i-1; j>=0; j--){
            if(numbers[j]==numbers[i]){
                left1[i]=left1[j]+1;
                break;
            }
        }
    }

    for(long long i=n-1; i>=0; i--){
        for(long long j=i+1; j<n; j++){
            if(numbers[i]==numbers[j]){
                right1[i]=right1[j]+1;
                break;
            }
        }
    }

    for(long long i=0; i<k; i++){
        long long a;
        cin >> a;
        a--;
        cout << left1[a] << ' ' << right1[a] << '\n';
    }

    return 0;
}
/*
10 4
2 1 3 2 2 5 4 2 3 5
1 7 4 10
*/
