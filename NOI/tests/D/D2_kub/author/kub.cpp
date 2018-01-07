#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b) swap(a,b);
    if(b>c) swap(c,b);
    if(a>b) swap(a,b);
    if(a==1)
        if(b==1)
            if(c==1) cout<<"0 0 0 0 0 0 1"<<endl;
            else cout<<"0 0 0 0 "<<c-2<<" 2 0"<< endl;
        else cout<<"0 0 "<<(c-2)*(b-2)<<" "<<(c-2 + b-2)*2<<" 4 0 0"<< endl;
    else cout<<(c-2)*(b-2)*(a-2)<<" "<<(c-2)*(b-2)*2 + (c-2)*(a-2)*2 + (a-2)*(b-2)*2<<" "<<(a-2 + b-2 + c-2)*4<<" 8 0 0 0"<< endl;
    return 0;
}
