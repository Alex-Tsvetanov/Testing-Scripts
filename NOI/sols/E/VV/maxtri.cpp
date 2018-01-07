#include<iostream>
using namespace std;
int main()
{
    long long c1,c2,c3;
    cout<<"Vuvedi 3 ednocifreni chisla: ";
    cin>>c1;
    cin>>c2;
    cin>>c3;
    cout<<"Vichki vuzmojnosti sa: "<<endl;
    cout<<c3<<c2<<c1<<endl;
    cout<<c2<<c3<<c1<<endl;
    cout<<c1<<c2<<c3<<endl;
    cout<<c3<<c1<<c2<<endl;
    cout<<c2<<c1<<c3<<endl;
    cout<<c1<<c3<<c2<<endl;
    return 0;
}

