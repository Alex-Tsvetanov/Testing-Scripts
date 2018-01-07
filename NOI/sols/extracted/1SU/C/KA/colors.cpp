#include<iostream>
#include<algorithm>
using namespace std;
bool imaGo[25002],wqrno;
int main() {
    long long n,k,chisla[100002],j=0,l,ostawasti;
    long long broiki[25002],redica[25002];
    cin>>n>>k;
    for(int a=0; a<n; a++) {
        cin>>chisla[a];
        broiki[chisla[a]]++;
        if(!imaGo[chisla[a]]) {
            imaGo[chisla[a]]=true;
            redica[j]=chisla[a];
            j++;
        }
    }
    sort(redica,redica+j);
    ostawasti=k-j;
    if(ostawasti<=0) {
        for(int a=0; a<k; a++) {
            cout<<redica[a]<<" ";
        }
    } else {
        l=0;
        wqrno=true;
        for(int a=0; a<k; a++) {
            cout<<redica[l]<<" ";
            broiki[redica[l]]--;
            if(!wqrno) {
                ostawasti--;
            }
            if(broiki[redica[l]]==0 || ostawasti==0) {
                l++;
                wqrno=true;
            } else {
                wqrno=false;
            }
        }
    }
    return 0;
}
