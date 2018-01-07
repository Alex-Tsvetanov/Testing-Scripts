#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,t,l,d,r,vreme;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&l);
    scanf("%d",&t);
    int jelaniq[n+1];
    int p
    for(int i=0;i<n;i++){
        jelaniq[i]=0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&jelaniq[i]);
    }
    r=0;
    while(n<r){
        for(int i=0,j=0;i<n+1;i++){
            if (jelaniq[i]>0) {
                j++;
                r++;
                jelaniq[i]-=1;
            }
        }
        vreme += t+1;
    }
    printf("%d",vreme);
    return 0;
}
