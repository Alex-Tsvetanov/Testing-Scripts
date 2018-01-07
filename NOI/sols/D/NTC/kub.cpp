#include <iostream>
using namespace std;

int main()
{
    int A;
    int B;
    int C;
    cin>>A>>B>>C;
    int brz, bro,brtwo, brtr, brfo, brfi, brsix;
    brz=( A-2)*(B-2)*(C-2);
    brtwo= 4*( (A-2)+ (B-2)+ (C-2));
    if( A<2 || B<2 || C<2 )
    {
        if ( A==B==C==1)
        {
            brz= bro=brtwo= brtr= brfo= brfi=0;
            brsix=1;
        }
        if (A==B==1 || A==C==1||C==B==1 )
        {
            if ( B==2 || A==2 || C==2)
            {
                brz=bro=brtwo=brtr=brfo=brsix=0;
                brfi=2;
            }
            else
            {
                brz=bro=brtwo=brtr=brsix=0;
                brfi=2;
                if(A==B==1)
                   {
                       brfo= C-2;
                   }
                        if(A==C==1) {
                                brfo=B-2;
                }
                            if(C==B==1) {
                                    brfo= A-2;
                            }
                    }
    }
    if (A<2)
        {
            brtr= 2*((B-2) + ( C-2));
                  brtwo= (B-2)*(C-2);
        }
        if(B<2)
        {
            brtr= 2*((A-2) + ( C-2));
                  brtwo= (A-2)*(C-2);
        }
        if(C<2)
        {
            brtr= 2*((B-2) + ( A-2));
                  brtwo= (B-2)*(A-2);
        }
        brz=bro=brfi=brsix=0;
        brfo=4;
    }

    else
    {
        bro=2*( ( A-2)*(B-2) + (B-2)*(C-2) + (A-2)*(C-2));
        brtr= 8;
        brfo=brfi=brsix=0;
    }


    cout<<brz<<" "<<bro<<" "<<brtwo<<" "<<brtr<<" "<<brfo<<" "<<brfi<<" "<<brsix;

    return 0;
}
