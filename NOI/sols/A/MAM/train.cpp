#include <iostream>

using namespace std;

int main()
{
const int Max=100000;
int p[Max];
int n;
cout<<"n= ";cin>>n;
for(int i=0;i<5;i++){
  for(int m=0; m<n; m++){
    cout<<"p["<<m+1<<"]= ";cin>>p[m];
  }
}

    return 0;
}
