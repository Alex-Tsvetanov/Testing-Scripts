#include<iostream>
using namespace std;
int main () {
long long bakterii, uvelichenie, otdeleni, namalenie, den, broqch=0, broqch2=0;
cin>>bakterii>>uvelichenie>>otdeleni>>namalenie>>den;
for(broqch=0;broqch<den;broqch++){
    bakterii=bakterii*uvelichenie;
    bakterii=bakterii-otdeleni;
    if(bakterii<otdeleni){
        cout<<0;
        return 0;
    }
    if(bakterii>namalenie){
        bakterii=namalenie;
    }
}
cout<<bakterii;
return 0;
}
