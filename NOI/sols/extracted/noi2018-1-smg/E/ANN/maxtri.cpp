#include <iostream>
using namespace std;
int main (){
    long long a,b,c;
    cin>>a>>b>>c;
      if(a>b){
        swap(a,b);
    }
     if(b>c){
        swap(c,b);
    }
      if(a>c){
        swap(a,c);
    }



    cout<<c<<b<<a;

return 0;
}
