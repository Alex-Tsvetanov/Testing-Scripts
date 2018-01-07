#include<iostream>
using namespace std;
int main() {
  long long n;
  cout<<"vuvedi chislo:";
  cin>>n;
  if(2<=n>=100) {
    while(n%2==0) {
      cout<<"izpolzvali sa dvoinistai eto tolkova";
    }
    while(n%3==0) {
      cout<<"izpolzvali sa troinistai eto tolkova";
    }
    while(n%2==0 and n%3==0) {
      cout<<"izpolzvali sa dvoinistai i troinistai eto tolkova";
    }
  }
    return 0;
  }
