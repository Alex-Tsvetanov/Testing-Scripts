#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int a[100010],b[100010],br[100010],n,k;

int main() {

	scanf("%d%d",&n,&k);
	for (int i=1; i<=n;i++){
		scanf("%d",&a[i]);
		br[a[i]]++;
		b[i]=br[a[i]];
	}

	for(int i=1; i<=k; i++) {
		int p;
		scanf("%d",&p);
		cout<<b[p]-1<<" "<<br[a[p]]-b[p]<<endl;
	}

	return 0;
}
