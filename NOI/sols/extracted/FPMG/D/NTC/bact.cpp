#include <iostream>
using namespace std;

int main()
{
    int A;
    int B;
    int C;
    int D;
    int K;
    cin>>A>>B>>C>>D>>K;
    while( K>0)
    {
        A=A*B;
        if ( A<C)
        {
            A=0;
            K=0;

        }
        else
        {
            A=A-C;
           if ( A>D)
            {
                A=D;
            }
         K= K-1;
        }

    }
    cout<<A;
return 0;
}
