#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> hi;
    int n, highest=0, input[16], a;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> input[i];
        if(input[i]>highest){
            highest=input[i];
            while(!hi.empty()){hi.pop();}
            hi.push(i);
        }
        else if(input[i]==highest){hi.push(i);}
    }
    for(int i=0;hi.size();i++){
        int index=hi.top(), j;
        hi.pop();
        j=index;
        a=0;
        do{
            a*=10;
            a+=input[j];
            j++;
            if(j==n)j=0;
        }
        while(j!=index);
        if(a>highest)highest=a;
        j=index;
        a=0;
        do{
            a*=10;
            a+=input[j];
            j--;
            if(j==-1)j=n-1;
        }
        while(j!=index);
        if(a>highest)highest=a;
    }
    cout << highest << endl;
    return 0;
}
