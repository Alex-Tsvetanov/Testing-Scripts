#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,br,x,y;
    br = 0;
    scanf("%d",&n);
    scanf("%d",&m);
    int kvadrati[2*n];
    int kvadratiX[n+1];
    int kvadratiY[n];
    kvadratiX[0]=0;
    kvadratiY[0]=0;
    for(int i=0;i<2*n;i++){
        scanf("%d",&kvadrati[i]);
    }
    for (int i=2;i<2*n-1;i+=2){
        kvadrati[i]= kvadrati[i-2]+kvadrati[i];
    }
    for (int i=1;i<n+1;i++){
        kvadratiX[i]= kvadrati[2*i-2];
    }
    for (int i=1;i<n+1;i++){
        kvadratiY[i]=kvadrati[i*2-1];
    }
    for(int i=0;i<m;i++){
        scanf("%d",&x);
        scanf("%d",&y);
        for(int j=0;j<n+1;j++){
            if(x<=kvadratiX[j] && y<=kvadratiY[j]){
                br+=1;
                break;
            }
        }
    }

    printf("%d ",br);
}

