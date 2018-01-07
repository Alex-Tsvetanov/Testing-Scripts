#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char i [100001];
char s [100000];

int main()
{
    int n;
    int result[11];
    int rtonow=0;
    scanf("%d",&n);
    fflush(stdin);
    for (int j=0;j<n;j+=1) {
        gets (i);
        i[strlen(i)]='+';

        for (int qq=0;qq<50;qq+=1) {
            s[qq]=0;
        }

        char a=' ';
        int k=0;
        int position=0;
        int pt=0;
        int pn=1;
        int chislo=0;

            while (a!='\0') {
                a=i[k];
                if (a!='+') {
                    s[position]=a;
                    position+=1;
                }
                else {
                    for (int l=0;l<position;l+=1) {
                        if (s[l]!='*') {
                            chislo=(s[l]-'0')%2;
                        }
                        else {
                            pn=chislo*pn;
                        }
                    }
                    pn=pn*chislo;
                    position=0;
                    pt=(pt+pn)%2;
                    pn=1;
                }
                k+=1;
            }
            result[rtonow]=pt;
            rtonow+=1;
    }
    for (int j=0;j<n;j+=1) {
        printf("%d\n",result[j]);
    }
    return 0;
}
