#include <iostream>
#include <stack>
using namespace std;
int permutacii[100001];
stack<int> B;
int kurZaPermutaciite(int n)
{
    stack<int> A;
    for(int i = 0; i < n+1; i ++)
    {
        int a = 0;
        if(B.empty() and A.empty()) {
            return 1;
        }
        if(!A.empty())
        {
            if(permutacii[i] == A.top())
            {
                A.pop();
                a = 1;
             //   cout<<"Minava prez pyrvi if"<<endl;
            }
        }
        if(!B.empty())
        {
            if(permutacii[i] >= B.top())
            {
               // cout<<"Minava prez vtori if"<<endl;
                for(int j = B.top(); j < permutacii[i]; j ++)
                {
                    A.push(B.top());
                  //  cout<<A.top();
                    B.pop();
                }
                B.pop();
                a = 1;
            }
        }
        if(a == 0) {
               // cout<<"Sega si eba maikata"<<endl;
        while(!B.empty()) {
            B.pop();
        }
        return 0;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int ans[7];
    int a1,a2,a3,a4,a5;
    // cout<<B.empty()<<B.top();

    for(int i = 0; i < 5; i ++)
    {
        for(int j = 0; j < n; j ++)
        {
            cin>>permutacii[j];
        }

        for(int k = n; k >= 1; k --)
    {
        B.push(k);
    }

    ans[i]=kurZaPermutaciite(n);
    }
    for(int i = 0; i < 5;i ++)
        cout<<ans[i];

    return 0;
}
