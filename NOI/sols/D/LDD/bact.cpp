#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main () {
    long long A, B, C, D, K, i, j, otgowor=1;
    cin >> A >> B >> C >> D >> K;
    for(i=0; i<K; i++)
    {
        A=A*B;
        if(A>=C)
        {
            A=A-C;
            A=A*B;
            if(A>=D)
            {
                A=D;
            }
            if(A<D)
            {
                break;
                cout << 0;
            }
        }
        if(A<C)
        {
            break;
        }

    }
        if(A>C and A<D)
        {
            cout << 0;
        }
        if(A<C)
        {
            cout << 0;
        }
        if(A>=C and A>=D)
        {
           cout << D;
        }



return 0;
}
