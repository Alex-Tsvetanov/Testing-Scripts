#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <queue>
#include <cmath>
#include <stdio.h>

#define _ << " " <<
#define debug(x) #x << " = " << x

#define ll long long
#define ull unsigned long long

int mod(std::string s, int m)
{
    int r = 0;
    for (auto x : s)
        ((r *= 10) += x - '0') %= m;

    return r;
}


int main()
{
    std::ios::sync_with_stdio(false);

    int a, b;
    std::cin >> a >> b;

    if (a > b)
        std::swap(a, b);

    int m;
    std::cin >> m;

    while(m--)
    {
        std::string input;
        std::cin >> input;

        int r = mod(input, a + b);
        if (r >= b)
        {
            std::cout << 1 << std::endl;
        } else
        {
            int k = r / a;
            if (k % 2 == 1)
                std::cout << 1 << std::endl;
            else
                std::cout << 2 << std::endl;
        }
    }

    return 0;
}
