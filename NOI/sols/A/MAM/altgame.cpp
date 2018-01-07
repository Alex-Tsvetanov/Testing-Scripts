#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int interval(int, int);
int main()
{
    int a,b, m,n;
    cin>>a>>b;
    srand(time(NULL));
    n=interval(10,1000);

    do{
    cout<<"Enter number of games m (1<=m<=10): ";cin>>m;
    }
    while((!(m>=1))||(!(m<=10)));

    for(int i=0;i<m;i++){

    }

    return 0;
}
int interval(int low, int high){
    return rand()%(high-low+1)+low;

}

