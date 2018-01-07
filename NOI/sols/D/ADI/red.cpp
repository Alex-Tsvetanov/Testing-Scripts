#include<iostream>

using namespace std;

int all[1000], what[1000];
int f[1000], s[1000];

int main () {

    int br1, br2, index;
    cin >> br1 >> br2;

    for(int i = 0 ; i < br1 ; i ++){
        cin >> all[i];
    }

    for(int i = 0 ; i < br2 ; i ++){
        cin >> what[i];
        what[i] --;
    }

    for(int i = 0 ; i < br2 ; i ++){
        index = what[i];
        for(int j = 0 ; j < br1 ; j ++){
            if(j == index && index < br1 - 1){
                j ++;
            }else if(j == index){
                break;
            }
            ////////////////
            if(all[j] == all[index]){
                if(index > j){
                    f[i] ++;
                }else{
                    s[i] ++;
                }
            }
        }
    }

    for(int i = 0 ; i < br2 ; i ++){
        cout << f[i] << " " << s[i] << "\n";
    }

    return 0;
}
