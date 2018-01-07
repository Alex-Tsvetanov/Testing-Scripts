#include <iostream>
#include <map>
using namespace std;

/* int main(){

    int total=0;
    int downloading = 0;
    int i;

    int n,m,T,L;
    cin>>n>>m>>T>>L;
    //cout<<n;

    int movies[n+1];    
    for(i=1;i<=n;i++)movies[i]=0;

    int students[n];
    cin>>students[0];
    total+=L+T;
    movies[students[0]]=1;
    ++downloading;
    for(i=1;i<n;++i){
       cin>>students[i];
       if(movies[students[i]]){
            movies[students[i]]=0;
            total+=T;
       }else{
           movies[students[i]]=1;
           ++downloading;
       }
    }
    cout<<total;
    

    return 1;
} */

int main(){
    int n,m,T,L;
    cin>>n>>m>>T>>L;

    int i;

    int students[n];
    int movies[n];
    
    for(i=1;i<=n;++i)movies[i]=0;
    

    for(i=0;i<n;++i){
        cin>>students[i];
        movies[students[i]]++;
    }

    int max=0;
    for(i=1;i<=n;++i){
        if(movies[i]>max)max=movies[i];
    }

    if(T<L)
    cout<< max*(L+T);
    else cout<<max*T+L;
    /* int movies[n+1];
    for(i=1;i<=n;++i){
        movies[i]=0;
    }

    for(i=0;i<n;++i){
        movies[students[i]]++;
    } */

    return 1;
}