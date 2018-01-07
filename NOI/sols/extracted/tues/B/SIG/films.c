#include <stdio.h>

int main () {
    int n,m,t,l;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&t);
    scanf("%d",&l);
    int films[n+1];
    int input;
    for (int i=0;i<n;i+=1) {
        films[i]=0;
    }
    for (int i=0;i<n;i+=1) {
        scanf("%d",&input);
        films[input]+=1;
    }
    int r=0;
    int time=0;
    while (r<n) {
        for (int i=0,j=0;i<n+1 && j<m;i+=1) {
            if (films[i]>0) {
                j+=1;
                r+=1;
                films[i]-=1;
            }
        }
        time+=t+l;
    }
    printf("%d",time);
    return 0;
}
