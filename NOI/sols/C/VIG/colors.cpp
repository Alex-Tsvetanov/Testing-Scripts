#include<iostream>
#include<algorithm>
using namespace std;
int output[50000], colors[25001];
int main(){
    int n, k, noc, i, a=0, j;
    cin >> n >> k;
    int baloons[25001], b[n];
    for(i=0;i<n;i++){
        cin >> b[i];
    }
    sort(b, b+n);
    for(i=0;i<n;i++){
        if(i==0){
            colors[a]=b[i];
            a++;
        }
        else if(b[i]!=b[i-1]){
            colors[a]=b[i];
        }
        baloons[b[i]]++;
    }
    for(i=0;a<k;i++){
        while(a<k&&baloons[colors[i]]>0){
            baloons[colors[i]]--;
            output[i]++;
            a++;
        }
    }
    a=0;
    for(j=0;a<k;j++){
        for(i=0;i<output[j]&&a<k;i++){
            cout << colors[j] << " ";
            a++;
        }
    }
    cout << endl;
    return 0;
}
