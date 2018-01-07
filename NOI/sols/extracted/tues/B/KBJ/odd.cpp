#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> split(string str, char br_chr) {
    vector<string> res;
    string curr_pt = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == br_chr) {
            res.push_back(curr_pt);
            curr_pt = "";
        } else {
            curr_pt += str[i];
        }
    }
    res.push_back(curr_pt);
    return res;
}

int str_to_int(string num) {
    int res = 0;
    int curr_d;
    for (int i = 0; i < num.length(); i++) {
        switch(num[i]) {
            case '0': curr_d = 0; break;
            case '1': curr_d = 1; break;
            case '2': curr_d = 2; break;
            case '3': curr_d = 3; break;
            case '4': curr_d = 4; break;
            case '5': curr_d = 5; break;
            case '6': curr_d = 6; break;
            case '7': curr_d = 7; break;
            case '8': curr_d = 8; break;
            case '9': curr_d = 9; break;
        }
        res = res * 10 + curr_d;
    }
    return res;
}

int solve_mult_expr(string expr) {
    int res = 1;
    vector<string> broken_dn;
    broken_dn = split(expr, '*');
    for (int i = 0; i < broken_dn.size(); i++) {
        res *= str_to_int(broken_dn[i]);
    }
    return res;
}

int main() {
    int n;
    cin >> n;

    string curr_expr;
    vector<string> broken_down;
    int output[n];

    for (int i = 0; i < n; i++) {
        cin >> curr_expr;

        broken_down = split(curr_expr, '+');
        int res = 0;

        for (int i = 0; i < broken_down.size(); i++) {
            res += solve_mult_expr(broken_down[i]);
        }

        output[i] = res % 2;
    }

    for (int i = 0; i < n; i++) {
        cout << output[i] << endl;
    }

    return 0;
}