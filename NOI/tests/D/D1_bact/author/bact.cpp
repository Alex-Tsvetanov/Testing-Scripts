#include <cstdio>
#include <algorithm>

#if ( _WIN32 || __WIN32__ )
    #define LLD "%I64d"
#else
    #define LLD "%lld"
#endif


using namespace std;

int main() {

	int a, b, c, d;
	long long k;
	scanf("%d%d%d%d" LLD,&a,&b,&c,&d,&k);
	while (k-- > 0) {
		a = max(0, min(a * b - c, d));
		if (a == 0 || a == d || a*(b-1)==c) break;
	}
	printf("%d\n", a);
}
