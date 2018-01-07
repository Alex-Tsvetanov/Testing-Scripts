#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ans[100000002];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int p;
    int countt=0;
    cin >> n >> p;
    int ii;
    bool udo = true;
    for(int i=1; i<=n; i++){
        ii =i;
        udo = true;
        while(ii/p>0){
            if(ii%p!=0 && ii%p!=1){
                udo =  false;
                break;
            }
            ii/=p;
        }
        if(!udo){
            continue;
        }
        if(ii%p!=0 && ii%p!=1){
            continue;
        }
        ans[countt]=i;
        countt++;
    }
    for(int i=0; i<countt; i++){
        cout << ans[i] << endl;
    }
    return 0;
}
