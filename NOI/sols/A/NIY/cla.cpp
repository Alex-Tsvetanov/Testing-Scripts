#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    string input;
    cin>>input;
    for(int i=0;i<input.length();i++){
            int num=0;
        int counter=0;
        while(input.at(i)!='+' && input.at(i)!='-'){
            num = num + (int)input.at(i)*pow(10,6-counter);
            counter++;
            i++;
        }
        num = num/(pow(10,counter));
        cout<<num<<endl;
    }
    return 0;
}
