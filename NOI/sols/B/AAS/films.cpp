#include <cstdio>

int watched_times[1000001] = {0};
int main()
{
	int n, m, T, L, i, films_count = 0;
	bool conflict = false;
	scanf(" %d %d %d %d", &n, &m, &T, &L);
	
	int tmp;
	for (i = 0; i < n; ++i)
	{
		scanf(" %d", &tmp);
		
		if(watched_times[tmp] == 0) ++films_count;
		if(++watched_times[tmp] > 1) conflict = true;
	}
	
	if (!conflict)
	{
		printf("%d\n", ((n/m)+1)*T+L); // if there is no conflict it is just download+play and wait for free slots
		return 0;
	}
	
	// CONFLICT!
	
	printf("%d\n", ((n/m)+1)*T*L+(n-films_count));
	return 0;
}