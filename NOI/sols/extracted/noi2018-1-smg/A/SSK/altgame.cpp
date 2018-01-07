#include <iostream>
using namespace std;
int igra(int a,int b,int oblast)
{
    if(oblast < a and oblast < b)
    {
        return 2;
    }
    int c = oblast/(a+b);
    if(c == 0 )
    {
        if(oblast < a or oblast < b)
        {
            if(a > b)
            {
                int d = oblast / b;
                if(d % 2)
                    return 1;
                return 2;
            }
            int d = oblast / a;
            if(d % 2)
                return 1;
            return 2;
        }
        return 1;
    }

    if(oblast - c*(a + b) >= a or oblast - c * (a + b) >= b)
        return igra(a,b,oblast - c * (a + b));
    return 2;

}


int main()
{
    int a,b,m;
    cin>>a>>b>>m;
    unsigned long long oblasti[m];
    for(int i = 0; i < m; i ++)
    {
        cin>>oblasti[i];
    }
    for(int i = 0; i < m; i ++)
    {
        cout<<igra(a,b,oblasti[i])<<endl;
    }
    return 0;
}

