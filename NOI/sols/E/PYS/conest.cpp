#include<iostream>
using namespace std;
int main() {
  long long n,t,f,x;
  cout<<"vuvedi kolko sa zadachite:";
  cin>>n;
  cout<<"vuvedi vremeto zakoeto trqbva da se reshat:";
  cin>>t;
  cout<<"vuvedi kolko zadachi sa mu lesni i gi e reshil prez purviq chas:";
  cin>>f;
  cout<<"vuvedi za kolko minuti reshava edna ot ostanalite zadachite:";
  cin>>x;
  while(5<=n<=100)
    while(1<=t<=24)
      while(2<=f<=n)
        while(10<=x<=60)
          if(5>n or n>100 && 1>t or t>24  && 2>f or f>n  && 10>x or x>60) {
            cout<<"Nekorektni danni";
          }
  if(x+1<t)

    return 0;
}
