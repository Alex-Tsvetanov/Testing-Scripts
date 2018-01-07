#include<iostream>
using namespace std;
int A, B, C;
int br0, br1, br2, br3, br4, br5, br6;
int func()
{
    cin>>A>>B>>C;
    if(A=1)
    {
        br0=0;
        if(C=1)
        {
            br1=0;
            br2=0;
            br3=0;
            br4=B-2;
            br5=2;
            br6=0;
        }
        if(C=2)
        {
            br1=0;
            br2=0;
            br3=2*(B-2);
            br4=4;
            br5=br6=0;
        }
        if(C>3)
        {
            br1=0;
            br2=(B-2)*(C-2);
            br3=2*(B+C-4);
            br4=4;
            br5=br6=0;
        }
    }
    else
    {
        br0=(A-2)*(B-2)*(C-2);
        br1=(A-2)*(B-2)*(C-2)*4+B/A;
        br2=(A-2)*(B-2)*(C-2)*4+8;
        br3=4;
        if(C=1) br4=0;
        else{ br4=0; }
        br5=0;
        br6=0;
    }
    if(A>1000||B>1000||C>1000)
    {
        cout<<"eror"<<endl;
    }
}
int main()
{
    func();
    cout<<br0<<" "<<br1<<" "<<br2<<" "<<br3<<" "<<br4<<" "<<br5<<" "<<br6;
    return 0;
}
