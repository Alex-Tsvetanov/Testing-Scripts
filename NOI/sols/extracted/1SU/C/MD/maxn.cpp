#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int num[16];
int amax[16];
int aind[16];
int anscurrent1[16];
int anscurrent2[16];
int ansmax[16];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        num[i]=k;
    }
    int countt=0;
    int maxx=num[countt];
    int ind=countt;
    countt++;
    for(int i=1; i<n; i++){
        if(num[i]<maxx){
            continue;
        }
        else if(num[i]==maxx){
            amax[countt]=num[i];
            aind[countt]=i;
            countt++;
        }
        else{
            countt=0;
            maxx = num[i];
            amax[countt]=num[i];
            aind[countt]=i;
            countt++;
        }
    }
    for(int j=0; j<countt; j++){
        int anss=0;
        for(int k=aind[j]; k<n; k++){
            anscurrent1[anss]=num[k];
            anss++;
        }
        for(int k=0; k<aind[j]; k++){
            anscurrent1[anss]=num[k];
            anss++;
        }
        anss=0;
        for(int k=aind[j]; k>=0; k--){
            anscurrent2[anss]=num[k];
            anss++;
        }
        for(int k=n-1; k>aind[j]; k--){
            anscurrent2[anss]=num[k];
            anss++;
        }
        if(j==0){
            for(int w=0; w<n; w++){
                ansmax[w] = anscurrent1[w];
            }
        }
        bool nknow=true;
        int q=1;
        while(nknow){
            if(anscurrent1[q]==ansmax[q]){
                q++;
            }
            else if(anscurrent1[q]>ansmax[q]){
                for(int w=0; w<n; w++){
                    ansmax[w] = anscurrent1[w];
                }
                nknow = false;
            }
            else{
                nknow = false;
            }
            if(q>n){
                break;
            }
        }
        nknow=true;
        q=1;
        while(nknow){
            if(anscurrent2[q]==ansmax[q]){
                q++;
            }
            else if(anscurrent2[q]>ansmax[q]){
                for(int w=0; w<n; w++){
                    ansmax[w] = anscurrent2[w];
                }
                nknow = false;
            }
            else{
                nknow = false;
            }
            if(q>n){
                break;
            }
        }
    }
    for(int g=0; g<n; g++){
       cout << ansmax[g];
    }
    cout << endl;
    return 0;
}
