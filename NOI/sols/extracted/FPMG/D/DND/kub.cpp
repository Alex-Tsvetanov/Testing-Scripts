#include <iostream>

using namespace std;

long long nv[7];

int main() {
    long long a, b, c;
    cin>>a>>b>>c;

    for(long long x = 0; x < a; x++) {
        for(long long y = 0; y < b; y++) {
            for(long long z = 0; z < c; z++) {
                long long ns = 0;
                if(x == 0)
                    ns++;
                if(x == a - 1)
                    ns++;

                if(y == 0)
                    ns++;
                if(y == b - 1)
                    ns++;

                if(z == 0)
                    ns++;
                if(z == c - 1)
                    ns++;

                nv[ns]++;
            }
        }
    }

    cout<<nv[0]<<" "<<nv[1]<<" "<<nv[2]<<" "<<nv[3]<<" "<<nv[4]<<" "<<nv[5]<<" "<<nv[6];

    cout<<endl;
}
