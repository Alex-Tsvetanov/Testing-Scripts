#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    if(A==0 || B==0 || C==0)
    {
        cout<<"0 0 0 0 0 0 0";
        return 0;
    }
    if(A>1 and B>1 and C>1)
    {
        if(A>2 && B>2 && C>2)
        {
            cout<<(A-1)*(B-1)*(C-1)<<" ";
        }else
        {
            cout<<"0 ";
        }

        cout<<2*((A-2)*(B-2)+(B-2)*(C-2)+(A-2)*(C-2))<<" ";
        cout<<4*(A-2)+4*(B-2)+4*(C-2);
        cout<<" 8 0 0 0 "<<endl;
        return 0;
    }
    if(A==1 &&  B==1 && C==1)
    {
        cout<<"0 0 0 0 0 0 1";
    }else if((A==1 && B==1) || (A==1 && C==1) || (B==1 && C==1))
    {
        cout<<"0 0 0 0 ";
        if(A==1 && B==1 )
        {
            cout<<C-2<<" 2 0"<<endl;
            return 0;
        }
        if(A==1 && C==1)
        {
            cout<<B-2<<" 2 0"<<endl;
            return 0;
        }
        if(B==1 && C==1)
        {
            cout<<A-2<<" 2 0"<<endl;
            return 0;
        }

    }else if(A==1 || B==1 || C==1)
    {
        cout<<"0 0 ";
        if(A==1)
        {
            cout<<(B-2)*(C-2)<<" "<<2*(B-2)+2*(C-2);
        }
        if(B==1)
        {
            cout<<(A-2)*(C-2)<<" "<<2*(C-2)+2*(A-2);
        }
        if(C==1)
        {
            cout<<(A-2)*(C-2)<<" "<<2*(B-2)+2*(A-2);
        }
        cout<<" 4 0 0"<<endl;
    }


    return 0;
}
