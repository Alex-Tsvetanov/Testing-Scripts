#include <iostream>

using namespace std;

int main()
{long long int n, p, i, pn, pb, x;
 cin >> n >> p;
 cout << 1 << '\n';
 for (i=2; ; i++)
  {x=i; pb=1;pn=0;
   while (x>=1)
    {pn+=(x&1)*pb; x>>=1; pb*=p;}
   if (pn<=n) cout<<pn<<'\n';
   else break;}
 return 0;
}
