#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string commands;
    getline(cin, commands);
    regex re("\\b");
    sregex_token_iterator it(commands.begin(), commands.end(), re, -1);
    sregex_token_iterator reg_end;

    for (++it; it != reg_end; ++it) {
        if (it->str() == "+") {
            cout << "left" << endl;
        } else if (it->str() == "-") {
            cout << "right" << endl;
        } else {
            int size = atoi((it->str()).c_str());
            cout << size << endl;
        }
    }
    return 0;
}