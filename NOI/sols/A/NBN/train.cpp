#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int perm[5][n];
    for(int i = 0;i < 5;i++)
    {
        for(int j = 0;j < n;j++)
            cin>>perm[i][j];
    }
    for(int i = 0;i < 5;i++)
    {
        int topA = 1;
        int stackSize = 0;
        int *stackb = new int[n];
        bool pos = true;
        for(int j = 0;j < n;j++)
        {
             if(perm[i][j] >= topA)
             {
                  for(int q = topA;q < perm[i][j];q++)
                  {
                      stackb[stackSize] = q;
                      stackSize++;
                  }
                  topA=perm[i][j]+1;
                  continue;
             }
             if(stackb[stackSize-1] == perm[i][j])
                stackSize--;
             else
             {
                 pos = false;
                 break;
             }
        }
        cout<<pos;
    }
    return 0;
}
