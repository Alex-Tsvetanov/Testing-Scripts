#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <sstream>

using namespace std;

int exp(int base, int power){
    if (power==1)
        return base;
    else
        return exp(base*power, power-1);
}

vector<int> split(string in, string sep){
    vector<int> res;
    string buff = "";
    for(int i = 0; i < in.length(); i ++){
        if (in[i] != sep[0]){
            buff += in[i];
        }
        else
        {
            int k;
            stringstream(buff) >> k;
            res.push_back(k);
            buff = "";
        }
    }
    if (buff != ""){
        int k;
        stringstream(buff) >> k;
        res.push_back(k);
    }
    return res;
}

vector<vector <int> > perms;

bool CtoB(vector<int>& C, vector<int>& B, int num){
    cout << "Moving " << num << " from C to B" << endl;
    if (C.back() == num){
        cout << "Matches" << endl;
        int buff = C.back();
        cout << "Back: " << buff << " C size: " << C.size() << endl;
        C.erase(C.end());
        C.era
        cout << "Back: " << buff << " C size: " << C.size() << endl;
        B.push_back(buff);
    }else{
        cout << "Does not match" << endl;
        return false;
    }
    return true;
}

bool AtoC(vector<int>& A, vector<int>& C, int num){
    cout << "Moving " << num << " from A to C" << endl;
    int index = 0;
    int present = 0;
    for (int i=0; i < A.size(); i ++){
        if (A[i] == num){
            present = 1;
            index = i;
        }
    }
    cout << num << "  is in A " << present << endl;
    if (present == 0){
        return false;
    }
    for(int i=0; i <= index; i++){
        C.push_back(A[0]);
        A.erase(A.begin());
    }
    cout << "A: ";
    for(int i=0; i<A.size(); i++){
        cout << A[i] << " ";
    }
    cout << endl;
    cout << "C: ";
    for(int i=0; i<C.size(); i++){
        cout << C[i] << " ";
    }
    cout << endl;
    return true;
}

int main(){
    int n;
    string ns;
    getline(cin, ns);
    stringstream(ns) >> n;
    int iters = 1;
    string result = "";

    for(int i=0; i < iters; i++){
        string buff;
        cout << "Line" << i+1 << endl;
        getline(cin, buff);
        vector<int> v = split(buff, " ");
        perms.push_back(v);
    }

    for(int i=0; i<perms.size(); i++){
        vector<int> current = perms[i];
        vector<int> A;
        vector<int> C;
        vector<int> B;

        cout << "Handling ";
        for(int k = 0; k < current.size(); k++){
            cout << current[k];
        }
        cout << endl;
        cout << "A: ";
        for(int k=0; k<n; k++){
            A.push_back(k+1);
            cout << A.back() << " ";
        }
        cout << endl;

        bool success = true;

        for(int k=0; k<n; k++){
            int next = current[k];
            cout << "Current is " << next << endl;
            bool isInC = false;
            for (int i=0; i<C.size(); i++){
                if (C[i] == next){
                    isInC = true;
                }
            }
            cout << next << " is in C " << isInC << endl;
            if (isInC){
                success = CtoB(C, B, next);
                cout << "Success" << success << endl;
            }else{
                success = AtoC(A, C, next);
                cout << "Success" << success << endl;
                if (success){
                    success = CtoB(C, B, next);
                    cout << "Success" << success << endl;
                }
            }
            cout << "A: ";
            for(int i=0; i<A.size(); i++){
                cout << A[i] << " ";
            }
            cout << endl;
            cout << "B: ";
            for(int i=0; i<B.size(); i++){
                cout << B[i] << " ";
            }
            cout << endl;
            cout << "C: ";
            for(int i=0; i<C.size(); i++){
                cout << C[i] << " ";
            }
            cout << endl;
        }
        if (success){
            result += "1";
        }else{
            result += "0";
        }
    }
    cout << "Result: " << result << endl;
    return 0;
}
