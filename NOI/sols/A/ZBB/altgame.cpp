#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    if(a > b){
        swap(a, b);
    }

    int m;
    cin>>m;

    for(int k=0; k<m; k++){
        long long int n;
        cin>>n;
        while(n>b*2) n-= a;

        int turn = 0;

        while(true){
            turn++;

            bool minMove = true;

            if(n<a) break;
            if(n<b){
                minMove = true;
            } else {
                if(n-b < a){
                    minMove = false;
                }
                else if ( ((n-b) % a == 0 && ((n-b)/a) % 2 == 0) ){
                    minMove = false;
                }// else if (n % a == 0 && (n/a) % 2 == 1){
                //    minMove = true;
                //}
            }
            if(minMove){
                n -= a;
            } else {
                n -= b;
            }
        }

        if(turn % 2 == 0){//if the last turn was by player 2
            cout<<'1'<<endl;
        } else {
            cout<<'2'<<endl;
        }
    }
}
