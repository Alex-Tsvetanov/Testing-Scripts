#include <iostream>
#include <vector>
#include <utility>
using namespace std;
#define br 100005
vector<vector<int> > arr;
int main(){
    for(int i=0; i<br; i++){
            vector<int> vec;
            arr.push_back(vec);
    }
    int n, k;
    cin>>n>>k;
    int red[n];
    for(int i=0; i<n; i++){
            cin>>red[i];
            arr[red[i]].push_back(i+1);
    }
    pair<int, int> res[k];
    int zap[k];
    for(int i=0; i<k; i++){
            cin>>zap[i];
            int koe = red[zap[i]-1];
            vector<int> vec = arr[koe];
            int s = vec.size();
            int otlqvo=0, otdqsno = 0;
            for(int z=0; z<s; z++){
                    if(vec[z] < zap[i]) otlqvo++;
                    if(vec[z] > zap[i]) otdqsno++;
            }
            res[i] = make_pair(otlqvo, otdqsno);
    }
    for(int i=0; i<k; i++){
            cout<<res[i].first<<" "<<res[i].second<<endl;
    }
    return 0;
}

