#include <bits/stdc++.h>
using namespace std;
int n;
long long ans = 0;
long long dig [16];
int main (){

	ios_base::sync_with_stdio (false);
	cin.tie (NULL);
	cin >> n;
	for (int i = 0; i < n; i ++) cin >> dig [i];
	for (int i = 0; i < n; i ++){
		if (dig [i] == 0) continue;
		int j = i;
		long long sum1 = 0, sum2 = 0;
		do{
			sum1 = sum1 * 10 + dig [j];
			j = (j + 1) % n;
		}while (j != i);
		do{
			sum2 = sum2 * 10 + dig [j];
			j = (j + n - 1) % n;
		}while (j != i);
		ans = max (ans, max (sum1, sum2));
	}
	cout << ans << '\n';

	return 0;
}
