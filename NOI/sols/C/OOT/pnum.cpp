#include <iostream>
#include <algorithm>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>

#define maxValue 16

using namespace std;

long nums[maxValue];

int main()
{
    int zeroCounter;
    int n;

    cin >> n;

    if(n > 2 && n < maxValue)
    {
        for(int i = 0; i < maxValue, i < n; i++)
        {
            cin >> nums[i];
            if(nums[i] == 0)
            {
                zeroCounter++;
            }
    //sort(nums[0], nums[n], greater<int>());

        for(int x = 0; x <= n; x++)
        {
            for(int y = 0; y < x; y++)
                {
                    if(nums[x] < nums[x-y])
                        {
                            int k;
                            nums[x-y] = k;
                            nums[x-y] = nums[x];
                            nums[x] = k;
                        }
                }
        }
    }


    if(zeroCounter > n)
    {
        for(int x = 0; x < maxValue; x++)
        {
            cout << nums[x];
        }
    }

    else
    {
        cout << "Pone edno chislo trqbva da e razlichno ot 0.";
    }
    }

    else
    {
        cout << "Nevaliden broi";
    }

    return 0;
}
