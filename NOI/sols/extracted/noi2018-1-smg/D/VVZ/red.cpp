#include <iostream>
using namespace std;
int main(){
 int n,k;
 cin >> n >> k;
 int a[n],b[k];
 int BRliavo=0,BRdiasno=0;
 for(int i=0;i<k;i++){
for(int p=0;p<b[i];p++){
	if(a[b[p]]==a[p])
		BRliavo++;
}
	cout << BRliavo << " ";
	BRliavo=0;
 }
 return 0;
}
