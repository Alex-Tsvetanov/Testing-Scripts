#include<iostream>
using namespace std;

int n;
const int N=15;
int a[N];

int next_r(int i)
{
  i++;
  if(i>=n) i=0;
  return i;
}

int next_l(int i)
{
  i--;
  if(i<0) i=n-1;
  return i;
}

long long int x,y;

int main()
{
  cin >> n;
  for(int i=0;i<n;i++) cin >> a[i];

  int m=a[0];
  for(int i=1;i<n;i++)
  if(m<a[i]) m=a[i];

  for(int k=0;k<n;k++)
  if(a[k]==m)
  {

    x=a[k];
    int i=next_r(k);
    do
    {
     x = 10*x+a[i];
     i=next_r(i);
    }
    while (i!=k);

    //cout << x << endl;
    if(y<x) y=x;

    x=a[k];
    i=next_l(k);
    do
    {
     x = 10*x+a[i];
     i=next_l(i);
    }
    while (i!=k);

    //cout << x << endl;
    if(y<x) y=x;

  }

  cout << y << endl;


}
