#include<iostream>
using namespace std;

int a[100010];
int n,k;

int main()
{
  cin >> n >> k;
  for(int i=1;i<=n;i++) cin >> a[i];

  for(int j=1;j<=k;j++)
  {
    int b; cin >> b;
    int c=0;
    for(int i=1;i<b;i++) if(a[i]==a[b]) c++;
    cout << c << " ";
    c=0;
    for(int i=b+1;i<=n;i++) if(a[i]==a[b]) c++;
    cout << c << endl;

  }
}
