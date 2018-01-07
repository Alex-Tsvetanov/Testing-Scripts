#include <iostream>
using namespace std;
int main () {
long long c[3];
for (int p=0;p<3;p++) cin>>c[p];
if (c[0]<c[1]) swap (c[0],c[1]);
if (c[1]<c[2]) swap (c[1],c[2]);
if (c[0]<c[1]) swap (c[0],c[1]);
cout<<(c[0]*100)+(c[1]*10)+c[2];
return 0;
}
