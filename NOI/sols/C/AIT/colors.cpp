#include <bits/stdc++.h>
using namespace std;
int n, k;
bool used [25005];
vector <int> ballons;
vector <int> ans;
int main (){

	ios_base::sync_with_stdio (false);
	cin.tie (NULL);
	cin >> n >> k;
	int k1 = k;
	for (int i = 0; i < n; i ++){
		int a;
		cin >> a;
		if (used [a]) ballons.push_back (a);
		else{
			used [a] = 1;
			ans.push_back (a);
			k --;
		}
	}
	sort (ballons.begin (), ballons.end ());
	for (int i = 0; i < k; i ++){
		ans.push_back (ballons [i]);
	}
	sort (ans.begin (), ans.end ());
	cout << ans [0];
	for (int i = 1; i < k1; i ++) cout << ' ' << ans [i];
	cout << '\n';

	return 0;
}
