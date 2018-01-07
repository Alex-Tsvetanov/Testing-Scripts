#include <iostream>
using namespace std;
int main () {

long long vhod1,vhod2,vhod3;

cin >> vhod1 >> vhod2 >> vhod3;

if (vhod1>=vhod2 && vhod1>=vhod3) {
    cout << vhod1;
    if (vhod2>=vhod3) {
        cout << vhod2;
        cout << vhod3;
    }else{
         cout << vhod3;
         cout << vhod2;
    }
}else if (vhod2>=vhod1 && vhod2>=vhod3) {
      cout << vhod2;
        if (vhod1>=vhod3) {
            cout << vhod1;
            cout << vhod3;
        }else{
            cout << vhod3;
            cout << vhod1;
        }

    }else if (vhod3>=vhod1 && vhod3>=vhod2) {
       cout << vhod3;

       if (vhod1>=vhod2) {
        cout << vhod1;
        cout << vhod2;
       }else{
        cout << vhod2;
        cout << vhod1;
       }
    }


return 0;
}
