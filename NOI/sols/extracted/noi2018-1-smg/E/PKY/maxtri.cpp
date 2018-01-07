#include<iostream>
using namespace std;
int main() {

    long long a, b, c, golq, sred, malk;
    cin >> a >> b >> c;
/*    if (a == b) {
        sred = b;
        if (a > c) {
            malk = c;;
            golq = a;
        } else {
            golq = c;
            malk = a;
        }
    } else {
        if (a == b && b == c) {
            golq = a;
            sred = b;
            malk = c;
        } else {
            if (a > b) {
                if (a > c) {
                    golq = a;
                    if (b > c) {
                        sred = b;
                        malk = c;
                    } else {
                        sred = c;;
                        malk = b;
                    }
                } else {
                    golq = c;
                    sred = a;
                    malk = b;
                }
            }

            if (b > a) {
                if (b > c) {
                    golq = b;
                    if (a > c) {
                        sred = a;
                        malk = c;
                    } else {
                        sred = c;
                        malk = a;
                    }
                } else {
                    golq = c;
                    sred = b;
                    malk = a;
                }
            }
        }
    }
    cout << golq << sred << malk;
*/

    for (int y = 9; y > -1; y--) {
        if (y == a) {
            cout << a;
        }
        if (y == b) {
            cout << b;
        }
        if (y == c) {
            cout << c;
        }
    }

    return 0;
}
