#include <iostream>
using namespace std;

char s[12001];
bool rightTurn[6005];
int turnLength[6005];

int returnInt(char a){
    return(a - 48);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> s;
    int t = 0;
    for(int i = 0; i < 12001; i++){
        if(s[i] == '+'){
            rightTurn[t] = false;

        }else if(s[i] == '-'){
            rightTurn[t] = true;
        }

        if((s[i] == '+' || s[i] == '-' || (s[i] == '\0' && s[i-1] != '\0')) && i != 0){
            int j = i - 1;
            int p = 1;
            do{
                turnLength[t] += p*returnInt(s[j]);
                p *= 10;
                j -= 1;
            }while(s[j] != '+' && s[j] != '-' && j >= 0);
            t++;
        }
    }

    int area = 3600;
    cout << area << "\n";
}
