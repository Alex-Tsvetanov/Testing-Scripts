#include <iostream>
using namespace std;

string tostr(int a)
{
    if(a == 0) return "0";
    string ret;
    while(a != 0)
    {
        ret += (a%10)+'0';
        a /= 10;
    }
    return ret;
}
bool sm(string a, string b)
{
    if(a.size() != b.size()) return a.size() < b.size();
    for(int i = a.size()-1; i >= 0; i --)
    {
        if(a[i] < b[i]) return 1;
        if(a[i] > b[i]) return 0;
    }
}
string operator-(string a, int bb)
{
    string b = tostr(bb);
    string res;
    int plc = 0;
    for(int i = 0; i < max(a.size(), b.size()); i ++)
    {
        if(i >= b.size())
        {
            res+= ((10+a[i]-'0'-plc)%10)+'0';
            plc = ((10+a[i]-'0'-plc)<10);
        }
        else
        {
            res+= ((10+a[i]-'0'-b[i]+'0'-plc)%10)+'0';
            plc = (10+a[i]-'0'-b[i]+'0'-plc)<10;
        }
    }
    while(res[res.size()-1]=='0') res=res.substr(0, res.size()-1);
    return res;
}
string help;
int toint(string s)
{
    int ret = 0;
    int c = 1;
    for(int i = 0; i < s.size(); i ++)
    {
        ret += (s[i]-'0')*c;
        c *= 10;
    }
    return ret;
}
int operator%(string a, int b)
{
    //cout << a << " " << b << help << endl;
    if(sm(a,help)) return toint(a);
    return (a-b)%b;
}
void rev(string &a)
{
    string ret;
    for(int i = a.size()-1; i >= 0; i --) ret += a[i];
    a = ret;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    int m;
    cin >> a >> b >> m;
    help = tostr(a+b);
    for(int i = 0; i < m; i ++)
    {
        string x;
        cin >> x;
        rev(x);
        cout << ((((x-a)%(a+b))<min(a,b)||((x-b)%(a+b))<min(a,b))?1:2) << endl;
    }
}
