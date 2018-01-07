#include<stdio.h>
#include<stdlib.h>

int main () {
    int N,M,tru=0,i,j;
    do{
    printf("M-");scanf("%d",&N);
    printf("N-");scanf("%d",&M);
    printf("\n\n");
    }while(N<1 || N>=10000 || M<1 || M>100001);
    long int W[N],H[N],X[M],Y[M],a[N];
    for(i=0;i<N;i++){
        do{
            printf("W-");scanf("%d",&W[i]);
            printf("H-");scanf("%d",&H[i]);
        }while(W[i]<1 || W[i]>10000 || H[i]<1 || H[i]>10000);
        printf("\n");
    }
    printf("\n");
    for(i=0;i<M;i++){
        do{
            printf("X-");scanf("%d",&X[i]);
            printf("Y-");scanf("%d",&Y[i]);
        }while(X[i]<0 || Y[i]>1000000 || Y[i]<0 || X[i]>1000000);
        printf("\n");
    }
    a[0]=W[0];
    for(i=1;i<N;i++){
        a[i]=W[i]+a[i-1];
    }
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            if(X[i]<=a[j] && Y[i]<=H[j] ){
                if((X[i]>a[j-1]&& j>1) || j==0)
                tru++;
            }
        }
    }
    printf("%d",tru);
return 0;
}
