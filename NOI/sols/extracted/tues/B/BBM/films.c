#include<stdio.h>
#include<stdlib.h>

int main () {
    int n,m,T,L,i,i1,end_time=0,same,l_a,empty_number=0,ok=0;
    char e;
    do{
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&T);
    scanf("%d",&L);
    }while(n>1000000 || m>1000000 || T>1000000 || L>1000000 || n<1 || m<1 || T<1 || L<1);
    int a[n+1],current_watch[n];
    l_a=n;
    printf("\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n && ok==0;i++){
        if(empty_number==a[i]){
            empty_number+=1;
        }else{
            ok=1;
        }
    }
    printf("%d",empty_number);
    a[n+1]=empty_number;
    e=getch();
    while(a[0]!=empty_number){
        printf("2");
        end_time+=T;
        for(i=0;i<l_a;i++){
            same=0;
            for(i1=i;i1>=0;i1--){
                if(a[i]!=current_watch[i1]){
                    same++;
                }
            }
            if(same==i+1){
                printf("1");
                current_watch[i1]=a[i];
                for(i1=i;i1<l_a;i1++){
                    a[i1]=a[i1+1];
                }
                l_a--;
                end_time+=L;
            }
        }
    }
    printf("%d",end_time);
return 0;
}
