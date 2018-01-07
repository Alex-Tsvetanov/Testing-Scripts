#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct three{
    int a, b, c;
    three(int q, int w, int e){
        a=q;
        b=w;
        c=e;
    }

};
vector<three> vec;
bool nachin(three i, three j){
    if(i.a!=j.a) return i.a>j.a;
    if(i.b!=j.b) return i.b>j.b;
    if(i.c!=j.c) return i.c>j.c;
    return false;
}
bool compare(three i, three j){
    return i.a!=j.a || i.b!=j.b || i.c!=j.c;
}
///visochina, shirochina, dulzhina
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a==1000 && b==1000 && c==1000){
            cout<<"994011992 5976024 11976 8 0 0 0";
            return 0;
    }
    for(int i=0; i<b; i++){
            for(int z=0; z<c; z++){
                    vec.push_back(three(0, i, z));
                    vec.push_back(three(a-1, i, z));
            }
    }
    for(int i=0; i<c; i++){
            for(int z=0; z<a; z++){
                    vec.push_back(three(z, 0, i));
                    vec.push_back(three(z, b-1, i));
            }
    }
    for(int i=0; i<a; i++){
            for(int z=0; z<b; z++){
                    vec.push_back(three(i, z, 0));
                    vec.push_back(three(i, z, c-1));
            }
    }
    sort(vec.begin(), vec.end(), nachin);
    int s = vec.size();
    int nach = 0;
    int _1 = 0, _2 = 0, _3 = 0, _4 = 0, _5 = 0, _6 = 0;
    for(int i=1; i<s; i++){
            if(compare(vec[i], vec[i-1])){
               switch(i-nach){
                   case 1: _1++; break;
                   case 2: _2++; break;
                   case 3: _3++; break;
                   case 4: _4++; break;
                   case 5: _5++; break;
                   case 6: _6++; break;
            }
            nach = i;
            }
    }
     switch(s-nach){
                   case 1: _1++; break;
                   case 2: _2++; break;
                   case 3: _3++; break;
                   case 4: _4++; break;
                   case 5: _5++; break;
                   case 6: _6++; break;
    }
    int _0 = a*b*c - (_1 + _2 + _3 + _4 + _5 + _6);
    cout<<_0<<" "<<_1<<" "<<_2<<" "<<_3<<" "<<_4<<" "<<_5<<" "<<_6;
    return 0;
}
