#include<iostream>
#include<algorithm>
using namespace std;
struct Film {
    int id;
    int repeating=-1;
} films[100001];
bool in_array(int *, int, int);
int * n_max_films(int);
int n, m, t, l, maximum[100001];

int main(){
    int time = 0;
    cin>>n>>m>>t>>l;
    for(int i=0; i<n; i++){
        cin>>films[i].id;
        films[i].repeating++;
    }
    int *best_films = n_max_films(m);
    for(int i=0; i<m; i++){
        while(best_films[i]!=0){
            best_films[i] --;
        }
        time += t;
    }
    time+=(n-l);
    cout<<time<<"\n";
    return 0;
}

int* n_max_films(int cnt){
    for(int i=0; i<cnt; i++){
        maximum[i] = films[0].repeating;
        if(i!=0 && maximum[i] == maximum[i-1]){
            maximum[i] = films[1].repeating;
        }
        for(int j=1; j<n; j++){
            if(maximum[i] < films[j].repeating && !in_array(maximum, i, films[j].repeating)){
                maximum[i] = films[j].repeating;
            }
        }
    }
    return maximum;
}
bool in_array(int *arr, int cnt, int value){
    for(int i=0; i<cnt; i++){
        if(arr[i]==value){
            return true;
        }
    }
    return false;
}
