#include <iostream>
#include <stack>
using namespace std;
int n;
bool ans[5];
stack<int> C;
int reached;
int main()
{
    cin >> n;
    for(int a = 0; a < 5; a ++)
    {
        reached = 0;
        while(!C.empty()) C.pop();
        for(int i = 0; i < n; i ++)
        {
            //cout << i << reached << endl;
            int temp;
            cin >> temp;
            if(temp > reached)
            {
                //cout << reached+1 << " " << temp << endl;
                for(int p = reached+1; p < temp; p ++) C.push(p);
                reached = temp;
            }
            else
            {
                //cout << C.top() << endl;
                if(temp == C.top()) C.pop();
                else ans[a] = 1;
            }
        }
    }
    for(int i = 0; i < 5; i ++) cout << !ans[i];
    cout << endl;
}

