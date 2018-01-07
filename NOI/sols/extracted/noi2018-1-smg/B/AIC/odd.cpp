#include <iostream>

using namespace std;

string is_odd_number (const string& s)
{
    return string("") + (char)((s [s.size () - 1] - '0') % 2 + '0');
}

int mul (const string& s, unsigned int from, unsigned int to)
{
    return !((unsigned int)(s.find ('0', from)) <= to);
}

int calc (const string& s)
{
    int result = 0;
    unsigned int part_from = 0; unsigned int part_to = 0;
    for (unsigned int i = 0 ; i < s.size () ; i ++)
    {
        if (s [i] == '+')
        {
            result += mul (s, part_from, part_to);
            part_from = i + 1;
            part_to = i + 1;
        }
        else
        {
            part_to ++;
        }
    }
    result += mul (s, part_from, part_to);
    return result;
}

bool is_odd (string& s)
{
    string eq = "";
    int start = 0, len = 0;
    for (int i = 0 ; i < s.size () ; i ++)
    {
        if (s [i] >= '0' and s [i] <= '9')
            len ++;
        else
        {
            eq += is_odd_number(s.substr (start, len)) + s [i];
            start = i + 1;
            len = 0;
        }
    }
    eq += is_odd_number(s.substr (start, len));
    //cout << eq << " = " << calc (eq) << endl;
    return calc (eq) % 2;
}

int main ()
{
    cin.tie (nullptr);
    ios::sync_with_stdio (false);
    int n;
    cin >> n;
    string s;
    while (n --)
    {
        cin >> s;
        cout << is_odd (s) << "\n";
    }
}
