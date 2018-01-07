#include<iostream>
using namespace std;

int main(){
    long long n, k;
    cin>>n;
    cin>>k;
    long long i, j;
    long long a[n];
    long long b[k];
    long long number=0;
    long long left[n];
    long long right[n];
    long long save=0;

    for(int i=0; i<n; ++i){
        a[i];
        left[i]=0;
        right[i]=0;
    }
    for(int j=0; j<n; ++j){
        b[j];
    }
    for(i=0; i<n; ++i){
        cin>>a[i];
    }
    for(j=0; j<k; ++j){
        cin>>b[j];
    }
   // while(number2!=k){;
while(save>k){
        ++save;
        if(a[b[save]]==a[b[save>0]]){
            ++right[save];
        }
        if(a[b[save]]==a[b[save<n]]){
            ++left[save];
        }
        if(a[b[save]]){
            right[save]=0;
        }
        if(a[b[save]]){
            left[save]=0;
        }
}
        i=0;
        save=i;
while(save!=k){
        cout<<left[save];
        cout<<" ";
        cout<<(right[save]+3)<<"\n";
        ++save;
}

return 0;
}
