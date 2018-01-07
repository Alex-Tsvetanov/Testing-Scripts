#include<iostream>

int n, k;
int b[100000];
int cb[100000];

using namespace std;
int main(){
cin >> n >> k;
for(int i = 0; i < n; i++) {
    cin >> b[i];
}

bool f = true;
while(f) {
    f = false;
    for(int i = 0; i < n; i++) {
        if (i + 1 < n && b[i] > b[i + 1]) {swap(b[i], b[i + 1]); f = true; }
    }
}

int lb = 0;
cb[0] = b[0];
b[0] = -1;
int ck = k - 1;
for(int i = 1; i < n; i++) {
    if (b[i] >= 0 && cb[lb] != b[i]) {
        lb++;
        cb[lb] = b[i];
        b[i] = -1;
        ck--;
    }
}

lb++;
for(int i = 1; i < n; i++) {
    if (ck == 0) break;
    if (b[i] >= 0) {cb[lb] = b[i]; b[i] = -1; lb++; ck--; }
}

f = true;
while(f) {
    f = false;
    for(int i = 0; i < k; i++) {
        if (i + 1 < k && cb[i] > cb[i + 1]) {swap(cb[i], cb[i + 1]); f = true; }
    }
}

for (int i = 0; i < k; i++) {
    cout << cb[i];
}
return 0;
}
