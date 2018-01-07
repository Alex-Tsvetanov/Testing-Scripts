#include<iostream>

using namespace std;

int str[7];

int main () {
    int A, B, C;
    cin >> A >> B >> C;

    if(A == B && B == C && C == 1){
        cout << "0 0 0 0 0 1\n";
        return 0;
    }

    if(A == B && B == 1 && B != C){
        str[5] += 2;
    }else if(A == C && C == 1 && C != B){
        str[5] += 2;
    }else if(B == C && C == 1 && C != A){
        str[5] += 2;
    }

    if((A == 1 && B >= 2 && C >= 2) || (A >= 2 && B == 1 && C >= 2) || (A >= 2 && B >= 2 && C == 1)){
        str[4] += 4;
    }else if(A == 1 && B == 1 && C >= 3){
        str[4] += C - 2;
    }else if(A >= 3 && B == 1 && C == 1){
        str[4] += A - 2;
    }else if(A == 1 && B >= 3 && C == 1){
        str[4] += B - 2;
    }

    if(A >= 2 && B >= 2 && C >= 2){
        str[3] += 8;
    }else if(A == 1 && B >= 3 && C >= 3){
        str[3] += (B - 2) * 2 + (C - 2) * 2;
    }else if(A >= 3 && B == 1 && C >= 3){
        str[3] += (C - 2) * 2 + (A - 2) * 2;
    }else if(A >= 3 && B >= 3 && C == 1){
        str[3] += (B - 2) * 2 + (A - 2) * 2;
    }

    if(A >= 2 && (B >= 3 || C >= 3)){
        if(B >= 3){
            str[2] += ((B - 2) * 4 - 8) * 2;
        }
        if(C >= 3){
            str[2] += ((C - 2) * 4 - 8) * 2;
        }
        str[2] += 4 * (A - 2);
    }
    if(B == 1 && A >= 3 && C >= 3){
        str[2] += (A - 2) * (C - 2);
    }else if(A == 1 && B >= 3 && C >= 3){
        str[2] += (B - 2) * (C - 2);
    }else if(C == 1 && B >= 3 && A >= 3){
        str[2] += (B - 2) * (A - 2);
    }

    if(B >= 3 && C >= 3 && A != 1){
        str[1] += (B - 2) * (C - 2) * 2;
    }else if(B != 1 && C >= 3 && A >= 3){
        str[1] += (A - 2) * (C - 2) * 2;
    }else if(B >= 3 && C != 1 && A >= 3){
        str[1] += (B - 2) * (A - 2) * 2;
    }

    if(A >= 3 && B >= 3 && C >= 3){
        str[1] += (C - 2) * (A - 2) * 2;
        str[1] += (B - 2) * (A - 2) * 2;
    }

    if(A >= 3 && B >= 3 && C >= 3){
        str[0] += (A - 2) * (B - 2) * (C - 2);
    }

    cout << str[0];

    for(int i  = 1 ; i < 7 ; i ++){
        cout << " " << str[i];
    }

    cout << "\n";

    return 0;
}
