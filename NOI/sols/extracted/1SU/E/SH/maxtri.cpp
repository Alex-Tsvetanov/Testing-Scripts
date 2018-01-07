#include <iostream>
using namespace std;
int main ()
{
    int cif_1,cif_2,cif_3;
    cin>>cif_1>>cif_2>>cif_3;
    if(cif_1>cif_2 and cif_1>cif_3)
    {
        cout<<cif_1;
        if(cif_1>cif_2 and cif_2>cif_3)
        {
            cout<<cif_2;
            if(cif_1>cif_3 and cif_3>cif_2){
                cout<<cif_3;
                if(cif_2>cif_1 and cif_1>cif_3)
                {
                    cout<<cif_1;
                    if(cif_2>cif_3 and cif_3>cif_1)
                    {
                        cout<<cif_3;
                        if(cif_3>cif_2 and cif_2>cif_1)
                        {
                            cout<<cif_2;
                            if(cif_3>cif_1 and cif_1>cif_2)
                            {
                                cout<<cif_1;
                            }
                        }
                    }
                }
            }
        }

    }
        if(cif_2>cif_1 and cif_2>cif_3)
        {
            cout<<cif_2;
            if(cif_1>cif_2 and cif_2>cif_3)
            {
                cout<<cif_2;
                if(cif_1>cif_3 and cif_3>cif_2)
                {
                    cout<<cif_3;
                    if(cif_2>cif_1 and cif_1>cif_3)
                    {
                        cout<<cif_1;
                        if(cif_2>cif_3 and cif_3>cif_1)
                        {
                            cout<<cif_3;
                            if(cif_3>cif_2 and cif_2>cif_1)
                            {
                                cout<<cif_2;
                                if(cif_3>cif_1 and cif_1>cif_2)
                                {
                                    cout<<cif_1;
                                }
                            }
                        }
                    }
                }
            }
        }

        if(cif_3>cif_1 and cif_3>cif_2)
        {
            cout<<cif_3;
        if(cif_1>cif_2 and cif_2>cif_3)
        {
            cout<<cif_2;

        if(cif_1>cif_3 and cif_1>cif_2)
        {
            cout<<cif_3;

        if(cif_2>cif_3 and cif_3>cif_1)
        {
            cout<<cif_3;

        if(cif_2>cif_1 and cif_1>cif_3)
        {
            cout<<cif_1;

        if(cif_3>cif_2 and cif_2>cif_1)
        {
            cout<<cif_2;

        if(cif_3>cif_1 and cif_1>cif_2)
        {
            cout<<cif_1;
        }
}
}
}
}
}
}
return 0;
}
