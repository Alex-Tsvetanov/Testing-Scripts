#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans[5];

    for(int i = 0; i < 5; i++){
        stack<int> A;
        stack<int> B;
        stack<int> C;
        int query[n];
        for(int j = 0; j < n; j++){
            cin >> query[j];
        }
        for(int l = n; l > 0; l--) A.push(l);
        int bcounter = 0;
        int querycounter = 0;
        int possible = 1;
        while(bcounter <= n){
            bool moved = false;
            if(!C.empty()){
                if(C.top() == query[querycounter]){
                    int ctop = C.top();
                    C.pop();
                    B.push(ctop);
                    querycounter++;
                    bcounter++;
                    moved = true;
                //    cout << "moved c to b - "<< ctop << endl;
                }
            }
            if(!A.empty()){
                if(A.top() == query[querycounter]){
                    int atop = A.top();
                    A.pop();
                    B.push(atop);
                    querycounter++;
                    bcounter++;
                    moved = true;
              //      cout << "moved a to b - " << atop << endl;
                }
            }
            if(!moved){
                if(A.empty()){
            //        cout << "a is empty" << endl;
                    break;
                }
                else {
                    int atop = A.top();
                    A.pop();
                    C.push(atop);
          //          cout << "moved a to c - " << atop << endl;
                }
            }
        }
        for(int k = n; k > 0; k--){
            if(query[k-1] == B.top()){
                B.pop();
            }else {
                possible = 0;
            }
        }
        ans[i] = possible;
    }

for(int i = 0; i < 5; i++) cout << ans[i];
cout << endl;

return 0
;}
