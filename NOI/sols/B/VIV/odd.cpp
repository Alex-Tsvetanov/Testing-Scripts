#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// -48
// + -> 43
// * -> 42

int eval(string s) {
    int res = 0;
    int* helper = new int[s.length()];

    for (int i = 0;i < s.length();i++) {
        int a = (int)(s[i]);
        if (a == 43){
            helper[i] = 43;
        }else if (a == 42) {
            helper[i] = 42;
        }else {
            helper[i] = a-48;
        }
    }

    int prev = 0;
    for (int i = 0;i < s.length();i++) {
        if (helper[i] == 43){
            prev = 43;
        }else if (helper[i] == 42) {
            prev = 42;
        }else {
            int current = 0;
            int n = -1;
            vector<int> digits;
            while (helper[i] < 10) {
                digits.push_back(helper[i]);
                i++;
                n++;
            }
            i-=1;

            for (int i = 0;i < digits.size();i++) {
                current = current + ((int) round(digits[i] * pow(10, n)));
                n-=1;
            }

            if (prev == 42){
                res*=current;
            }else if (prev == 43) {
                if (helper[i+1] == 42) {
                    int tmp = helper[i];
                    i += 1;
                    while (helper[i] == 42) {
                        i = i+1;
                        int current = 0;
                        int n = -1;
                        vector<int> digits;
                        while (helper[i] < 10) {
                            digits.push_back(helper[i]);
                            i++;
                            n++;
                        }
                        i-=1;

                        for (int i = 0;i < digits.size();i++) {
                            current = current + ((int) round(digits[i] * pow(10, n)));
                            n-=1;
                        }
                        tmp*=current;
                        i+=1;
                    }
                    i-=1;
                    res+=tmp;
                }else {
                    res+=current;
                }
            }else {
                res = current;
            }
        }
    }

    return res;
}

int main()
{
    int n;
    cin >> n;
    long* res = new long[n];
    for (int i = 0;i < n;i++){
        string exp;
        cin >> exp;
        long a = eval(exp);
        res[i] = a;
        cout << a << endl;
    }

    for (int i = 0;i < n;i++) {
        if (res[i]%2==0) {
            cout << 0 << endl;
        }else {
            cout << 1 << endl;
        }
    }

    return 0;
}
