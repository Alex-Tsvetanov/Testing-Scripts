#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    int n;
    vector<vector<int>> trains;

    cin >> n;

    for (int i = 0; i < 5; i++) {
        string line;
        int number;
        vector<int> numbers;

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            numbers.push_back(num);
        }
        trains.push_back(numbers);
    }

    for (int i = 0; i < 5; i++) {
        int temp = 1;
        for (int j = 0; j < n - 1; j++) {
            if ((trains[i][j] != (trains[i][j + 1] - 1)) and trains[i][j] != (trains[i][j + 1] + 1)) {
                if (trains[i][j] == n or trains[i][j + 1] == n) {
                    if (trains[i][j] == 1 or trains[i][j + 1] == 1) {
                        continue;
                    }
                }
                temp = 0;
            }
            if ((trains[i][j] < trains[i][j + 1]) and (trains[i][j] == 1)) {
                temp = 0;
            }
        }
        cout << temp;
    }

    return 0;
}
