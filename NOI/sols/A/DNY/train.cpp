#include <iostream>
#include <math.h>
using namespace std;


/// if you are reading this i suggest u move on as i wrote the biggest pile of shit ever.
// Good luck tho :)
int main(){

    int n;
    cin >> n;

    for(int i = 0; i < 5; ++i){
        int a[n];
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        double center;
        if(n%2 == 1){
            center = ((double)n/2);
            center = ceil(center);
            //cout << center << endl;
            for(int i = 0; i < n; ++i){
                a[i] = (center - a[i]) + center;
            }
        } else {
            center = n/2;
            center += 0.5;
            for(int i = 0; i < n; ++i){
                a[i] = (center - a[i]) + center;
            }
        }
        int prevmin = a[0]; // more than max
        int currmin = a[0];
        int prevmax = -1;
        bool out = false;

        for(int i = 1; i < n; ++i){
            if(currmin < a[i] && (a[i] < prevmin || a[i] > prevmax)){
                if(a[i] > prevmax)
                    prevmax = a[i];
                // all gutchi
            } else if(a[i] > prevmin){
                cout << 0;
                out = true;
                break;
            } else if(a[i] < currmin){
                prevmin = currmin;
                currmin = a[i];
            }
        }
        if(!out)
            cout << 1;

    }

    return 0;
}
