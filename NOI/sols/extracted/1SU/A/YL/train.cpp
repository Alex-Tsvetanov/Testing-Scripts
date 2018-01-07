#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<5;i++){
        int j;
        bool bla=false;
        int biggestAdded=0;
        vector<int> stek;
        for(j=0;j<n;j++){
            int crnt;
            cin>>crnt;
            if(bla) continue;
            if(crnt>biggestAdded){
                for(int k=biggestAdded+1;k<crnt;k++){
                    stek.push_back(k);
                }
                biggestAdded=crnt;
            }else{
                if(stek[stek.size()-1]==crnt){
                    stek.pop_back();
                }else{
                    cout<<"0";
                    bla=true;
                }
            }
        }
        if(!bla) cout<<"1";
    }
    cout<<"\n";
    return 0;
}
