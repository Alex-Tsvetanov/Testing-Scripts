#include <bits/stdc++.h>
using namespace std;
int main (){

	ios_base::sync_with_stdio (false);
	cin.tie (NULL);
	long long int n, p;
	cin >> n >> p;
	if (p == 2){
		for (int i = 1; i <=n; ++i) cout << i << '\n';
		return 0;
	}
	queue <long long> q;
	q.push (1);
	while (1){
		long long curr = q.front ();
		long long nxt = curr * p;
		if (nxt > n) break;
		q.push (nxt);
		if (nxt == n) break;
		q.push (nxt + 1);
		cout << curr << '\n';
		q.pop ();
	}
	while (!q.empty ()){
		cout << q.front () << '\n';
		q.pop ();
	}

	return 0;
}
