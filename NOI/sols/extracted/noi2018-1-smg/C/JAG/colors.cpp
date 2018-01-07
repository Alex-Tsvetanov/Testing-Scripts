#include <iostream>
using namespace std;
int main()
{
 int N,K,br=0,m;
 int i;
 int A[100002],Br[100002],Res[100002];
 cin >> N >> K;
 for (i=0; i<N; i++) { cin >> A[i]; Br[A[i]]++; }
 while (br<K)
 {
     m=1;
   for (i=1; i<25010; i++)
   {
    if (Br[i] > 0)
        { Br[i]--; Res[i]++; br++; if (br == K) {m=0; break;} }
   }
   if (m==0) break;
 }
 for (i=1; i<25010; i++)
 {
  for (int j=0; j<Res[i]; j++) cout << i << " ";
 }
 return 0;
}
