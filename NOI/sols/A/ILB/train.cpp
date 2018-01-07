#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <set>
#include <algorithm>
#include <queue>
#include <cmath>
#include <stdio.h>
#define X first
#define Y second

#define _ << " " <<
#define debug(x) #x << " = " << x

#define ll long long
#define ull unsigned long long

const int maxn = 1e6+100;
int a[maxn];

int main()
{
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int t = 5;
    while(t--)
    {
        for (int i =0; i < n; i++)
            std::cin >> a[i];

        std::stack<int> s;

        int pop = 1;
        bool ok = true;

        for (int i = 0; i < n; i++)
        {
            while(a[i] >= pop)
            {
                s.push(pop++);
            }

            if (s.size() && s.top() == a[i])
                s.pop();
            else
            {
                ok= false;
                break;
            }
        }

        std::cout << (ok ? 1 : 0);


    }

    std::cout << std::endl;

    return 0;
}
