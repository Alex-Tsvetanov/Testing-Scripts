#include <iostream>
#include <map>

using namespace std;

int n, m;
pair <int, int> A[10000];
map <pair <int, int>, int> points;
int res;

int main ()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	cin >> n >> m;

	int start = 0;
	for (int i = 0; i < n; ++i)
	{
		int a, b;
		cin >> a >> b;

		pair <int, int> curr;
		start += a;
		curr.first = start;
		curr.second = b;

		A[i] = curr;
		//cout << A[i].first << ' ' << A[i].second << '\n';
	}
	//cout << "----------\n";

	for (int i = 0; i < m; ++i)
	{
		pair <int, int> curr;
		cin >> curr.first >> curr.second;
		++points[curr];
	}

	for (map <pair <int, int>, int>::iterator it = points.begin(); it != points.end(); ++it)
	{
		pair <pair <int, int>, int> curr = *it;
		//cout << "curr " << curr.first.first << ' ' << curr.first.second << ' ' << curr.second << '\n';
		int f = 0, l = n - 1;
		while (f < l - 1)
		{
			int midd = (f + l) / 2;
			//cout << f << ' ' << l << ' ' << midd << '\n';
			if (A[midd].first < curr.first.first)
			{
				f = midd;
			}
			else if (A[midd].first > curr.first.first)
			{
				l = midd;
			}
			else
			{
				f = midd;
				break;
			}
		}
		//cout << A[f].first << ' ' << A[l].first << '\n';

		if (curr.first.first <= A[f].first)
		{
			if (curr.first.second <= A[f].second)
			{
				res += curr.second;
			}
		}
		else if (curr.first.first <= A[l].first)
		{
			if (curr.first.second <= A[l].second)
			{
				res += curr.second;
			}
		}
	}

	cout << res << '\n';
	return 0;
}
