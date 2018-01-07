/*
2 5
43
Стратегия на А:
Ако остатък при деление брой звезди на (а+б) е по-голям
от мин(а,б) -> А печели;
Стратегия на Б:
Ако остатък при деление брой звезди на (а+б) е по-малък или равен мин(а,б) -> Б печели;
*/
#include<iostream>
#include<cstring>
using namespace std;
int remainder(unsigned long long number,int divider)
{
    int x=number/divider;
    return number - divider*x;
}
int whoWins(int a,int b,unsigned long long numberOfStars)
{
    if(remainder(numberOfStars,a+b)>=min(a,b)) return 1;
    else return 2;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int m;
    cin>>m;
    unsigned long long numberOfStars[m];
    int i=0;
    for(i=0;i<m;i++)
    {
        cin>>numberOfStars[i];
    }
    for(i=0;i<m;i++)
    {
        cout<<whoWins(a,b,numberOfStars[i])<<endl;
    }
}
