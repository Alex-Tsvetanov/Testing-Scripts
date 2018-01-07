#include <iostream>
using namespace std;
int main(){
int a [3],b;
for (int i = 0;i<3;i++){
    cin >> a[i];
}
if (a[0] == 0 && a[1] == 0 && a[2] == 0){
    cout << "Enter is wrong";
}
else{
for (int i = 0;i<3;i++){
    for (int j = 0;j<3;j++){
        if (a[i]>a[j]){
            b = a[i] ;
            a[i] = a[j];
            a[j] = b;
        }
    }
}
cout << a[0] << a[1] << a[2];
}
return 0;
}
