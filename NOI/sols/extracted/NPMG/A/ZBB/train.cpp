#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int k=0; k<5; k++){
        stack<int> a;
        stack<int> c;
        bool answered = false;

        for(int i=n; i>=1; i--){
            a.push(i);
        }

        for(int i=0; i<n; i++){
            int vag;
            cin>>vag;

            if(answered){
                continue;
            }

            if(c.empty()){
                c.push(a.top());
                a.pop();
            }

            if(c.top() > vag){
                cout<<'0';
                answered = true;
                continue;
            }

            while(c.top() < vag){
                if(a.empty()){
                    break;
                }

                c.push(a.top());
                a.pop();
            }

            if(c.top() > vag){
                cout<<'0';
                answered = true;
                continue;
            }

            if(c.top() == vag){
                c.pop();
            }
        }

        if(!answered){
            cout<<'1';
        }
    }

    cout<<endl;

    return 0;
}
