#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int n, m, T, L;
int capS;
int wait[1000000], waitS;
int film[1000000]; //, want[1000000];
set <int> filmsS;
set <pair <int, int> > toWatch;
int timee;
int ready;
map <int, bool> canBeUsed;

int nod (int a, int b)
{
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}

	return a;
}

int main ()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	if (true)
	{
		cin >> n >> m >> T >> L;

		map <int, int> M;
		capS = m;
		for (int i = 0; i < n; ++i)
		{
			int inp;
			cin >> inp;

			canBeUsed[inp] = true;
			filmsS.insert(inp);
			++M[inp];
		}

		for (map <int, int>::iterator it = M.begin(); it != M.end(); ++it)
		{
			toWatch.insert(*it);
		}
	}

	int plus = nod(T, L);
	//cout << plus << '\n';

	waitS = T;
	set <pair <int, int> >::iterator asdf = toWatch.begin();
	for (int i = 0; capS > 0 and i < n and filmsS.size() > 0; ++i)
	{
		pair <int, int> curr = *asdf;
		toWatch.erase(asdf);
		--curr.second;
		toWatch.insert(curr);
		filmsS.erase(curr.first);
		film[i] = curr.first;
		canBeUsed[film[i]] = false;
		wait[i] = waitS + L;
		--capS;
		++asdf;
	}
	ready = m;

	int res = waitS + L;
	while (ready < n)
	{
		timee += plus;
		//cout << "timee " << timee << ' ' << ready << '\n';

		if (waitS <= timee)
		{
			capS = m;
		}
		/*cout << "s: " << capS << ' ' << waitS << '\n';
		for (set <int>::iterator it = filmsS.begin(); it != filmsS.end(); ++it)
		{
			cout << *it << ' ';
		}
		cout << '\n';*/
		for (int i = 0; i < n; ++i)
		{
			//cout << film[i] << '\n';
			if (film[i] != 0 and !canBeUsed[i] and wait[i] <= timee)
			{
				canBeUsed[i] = true;
			}
			//cout << i << ": " << wait[i] << ' ' << film[i] << ' ' << canBeUsed[i] << '\n';
		}
		//cout << "---------------\n";
//-----------------------------------
		for (int i = 0; i < n and ready < n; ++i)
		{
			if (film[i] == 0)
			{
				for (int j = 0; j < n and ready < n; ++j)
				{
					if (film[j] != 0 and canBeUsed[j])
					{
						//cout << "try " << film[j] << '\n';
						for (set <pair <int, int> >::iterator it = toWatch.begin(); it != toWatch.end(); ++it)
						{
							if (film[j] == (*it).first)
							{
								++ready;
								canBeUsed[film[j]] = false;
								wait[i] = wait[j] + T + L;
								if (wait[i] > res)
								{
									res = wait[i];
								}
								film[i] = film[j];
								film[j] = 0;
							}
						}
					}
				}
				if (film[i] == 0 and capS > 0 and waitS <= timee)
				{
					for (set <pair <int, int> >::iterator it = toWatch.begin(); it != toWatch.end(); ++it)
					{
						if (filmsS.find((*it).first) != filmsS.end())
						{
							--capS;
							filmsS.erase((*it).first);
							film[i] = (*it).first;
							wait[i] = waitS + T + L;
							if (waitS > res)
							{
								res = waitS;
							}
							canBeUsed[film[i]] = false;
						}
					}
				}
			}
		}
	}
	//timee += T + L;
	//cout << ready << '\n';

	cout << res << '\n';
	return 0;
}
