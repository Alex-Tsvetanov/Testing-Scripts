#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::string inp;
        std::cin >> inp;
        int cO = 0;
        bool isE = false, plok = false;
        char last = '\0';
        for(auto &x: inp) {
            if(x == '*') {
                if((last - '0') % 2 == 0)
                    isE = true;
                plok = true;
            }
            if(x=='+') {
                if(plok)
                    if((last-'0')%2==0)
                        isE = true;

                if(plok && !isE)
                    cO++;
                if(!plok && (last-'0') % 2)
                    cO++;
                isE = false;
                plok = false;
            }
            last = x;
        }
        if(plok) {
            if((last - '0') % 2 == 0)
                isE = true;
            if(!isE)
                cO++;
        } else if(((last - '0') % 2)) {
            cO++;
        }
        if(cO%2) {
            std::cout << 1 << '\n';
        } else {
            std::cout << 0 << '\n';
        }
    }
    return 0;
}
