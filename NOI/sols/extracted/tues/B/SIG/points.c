#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int r[n][2];
    scanf("%d",&r[0][0]);
    scanf("%d",&r[0][1]);
    for (int i=1;i<n;i+=1) {
        scanf("%d",&r[i][0]);
        scanf("%d",&r[i][1]);
        r[i][0]+=r[i-1][0];
    }
    int res=0;
    int x,y;
    for (int i=0;i<m;i+=1) {
        scanf("%d",&x);
        scanf("%d",&y);
        for (int j=0;j<n;j+=1) {
            //printf("x %d-%d\n",x,r[j][0]);
            //printf("y %d-%d\n",y,r[j][1]);
            if (x<=r[j][0] && y<=r[j][1]) {
                res+=1;
                break;
            }
        }
    }
    printf("%d",res);
    return 0;
}
