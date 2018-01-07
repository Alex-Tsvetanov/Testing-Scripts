#include <iostream>
using namespace std;
 unsigned long long Stepen (unsigned long long a , int b)
 {
   int c,d;
   d=a;
   for (c=1; c<b; c++) a=a*d;
   return a;
 }
int main()
{
    unsigned long long A[100000];
    unsigned long long n, p,i,j,broi,br=1,tek=2,chek=0;
    cin >> n >> p;
    A[0]=0;
    A[1]=1;
    cout << A[1] << endl;
    for (i=2; i<=n; i=i*2)
    {
        broi =0;
     for (j=i; j<i*2; j++)
     {
       A[j]=Stepen(p,br)+A[j-tek];
       broi++;
       if (A[j]>n) {chek=1;break;}
       else {cout << A[j] << endl ;}
     }
     br++;
     tek=tek+broi;
     if (chek==1) break;
    }
  return 0;
}
