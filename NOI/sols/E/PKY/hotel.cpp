#include<iostream>
using namespace std;
long long students, by_2, by_3;
int main() {

    cin >> students;

    if (students == 2) {
        by_2 = 1;
        by_3 = 0;
    } else if (students == 4) {
        by_2 = 2;
        by_3 = 0;
    } else {
        for (int a = 0; a < 1000; a++) {
            for (int b = 0; b < 1000; b++) {
                if (b * 2 + a * 3 == students) {
                    by_2 = b;
                    by_3 = a;
                    break;
                }
                if (by_2 == b && by_3 == a) {
                    break;
                }
            }
        }
    }

    cout << by_2 << " " << by_3;

    return 0;
}
