#include <cstdio>
#include <cstring>

bool answers[10];

//char* plus_tokens[];

bool odd(char* A) // for one number
{
    return A[strlen(A)-1] % 2 != 0;
}

bool multiply(bool oddA, bool oddB)
{
    if (oddA != oddB) return false;
    else if (oddA == true) return true;
    return false;
}

bool sum(bool oddA, bool oddB)
{
    return oddA != oddB;
}

bool res_multipl(char* A_orig)
{
	char* A = A_orig;
    bool isOdd;
    char* token = strtok(A, "*");
	isOdd = odd(token);
    while((token = strtok(NULL, "*")) != NULL)
    {
        isOdd = multiply(isOdd, odd(token));
    }
    return isOdd;
}

bool res(char* A_orig)
{
	char* A = A_orig;
	char* tmp[50001]; // token positions
    bool isOdd;
	int i = -1, j;
	
    tmp[++i] = strtok(A, "+");
	
    while((tmp[++i] = strtok(NULL, "+")) != NULL);
	
	isOdd = res_multipl(tmp[0]);
	for(j = 1; j < i; ++j)
	{
		isOdd = sum(isOdd, res_multipl(tmp[j]));
	}
	
    return isOdd;
}


int main()
{
    int n, i;
    scanf("%d", &n);

    char tmp[100000];

     for (i = 0; i < n; ++i)
    {
        scanf(" %s", tmp);
        answers[i] = res(tmp);
    }

    for (i = 0; i < n; ++i)
    {
        printf("%d\n", answers[i]);
    }
	
	return 0;
}
