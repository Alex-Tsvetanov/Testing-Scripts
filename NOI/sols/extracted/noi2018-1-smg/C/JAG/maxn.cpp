#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
 int n,i;
 int A[100];
 cin >> n;
 for (i=0; i<n; i++) cin >> A[i];
 sort (A,A+n);
 for (i=n-1; i>=0; i--) cout << A[i];
 return 0;
}


