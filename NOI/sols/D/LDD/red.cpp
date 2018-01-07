#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
long long n, k, vypros[100001], redica[100001], i, j, brq1, brq2, z,  brl=0, brr=0, br;
int main () {
 cin >> n >> k;
 for(i=0; i<n; i++)
 {
     cin >> redica[i];
 }
 br=i;
 for(i=0; i<k; i++)
 {
     cin >> vypros[i];
 }
 for(j=0; j<k; j++)
 {
    for(i=0; i<n; i++)
    {
        brl=0;
        brr=0;
       if(vypros[j]-1==i)
       {
           for(brq1=0; brq1<i; brq1++)
           {
               if(redica[brq1]==redica[i] and i!=0)
               {
                   brl++;
               }
               if(redica[brq1]==redica[i] and i==0)
               {
                   brl=brl;
               }
           }
           z=i;
           for(brq2=i; brq2<br; brq2++)
           {

             if(redica[brq2]==redica[i] and redica[brq2]!=redica[z])
             {
                 brr++;
             }
              if(redica[brq2]==redica[i] and redica[brq2]==redica[z])
             {
                 brr=brr;
             }

           }
       }
    }
    cout << brl << " " << brr << endl;
 }




return 0;
}
