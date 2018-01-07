#include <iostream>
#include <stack>

using namespace std;

int main(){

int n;
cin>>n;
int res[5];
for(int i=0; i<5; i++){
    res[i] = 1;
}

for(int j=0; j<5; j++){
    int arr[n];
    stack <int> C;
    int cnt = 1;
    bool done = 0;

    for(int i = 0; i<n; i++){
        int a;
        cin>>a;
        arr[i] = a;
    }


    for(int i=0; i<n; i++){
        int a = arr[i];

            if (C.empty()){
               // cout<<"check empty"<<endl;
                while(cnt<a){
                    C.push(cnt);
                    cnt++;
                }
                cnt=a;
            }


            else{

                if(a<C.top()){

                    //cout<<"check fail"<<endl;
                    res[j] = 0;


                }

                if(a>C.top()){



                    while(cnt<=a){
                        C.push(cnt);
                        cnt++;
                    }
                    cnt=a;
                 }


                 if(a == C.top()){


                    C.pop();
                 }

            }
            if(res[j]!=0) res[j] = 1;

        }
    }




for(int i=0; i<5; i++){
    cout<<res[i];
}
cout<<endl;
return 0;


}

/*
3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
*/

