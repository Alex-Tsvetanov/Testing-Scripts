#include <iostream>
using namespace std;
int main () {

long long n,t,f,x;

cin >> n >> t >> f >> x;

if (t*60-1<x) {
   cout << "NO" << endl;
   cout << t*60+x*(n-f)+60;
   cout << n-(n-f+n-f);
  }if (t*60-1==x) {
  cout << "EXACT!";

  } if (t*60-1>x) {
    cout << "YES" << endl;
    cout << t*60-x*(n-f)-60;
}



return 0;
}
