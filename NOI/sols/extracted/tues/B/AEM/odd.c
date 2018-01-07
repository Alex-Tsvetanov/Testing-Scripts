#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void is_odd(int number);
int calculate(char *equation);
int find_number(char *equation,int *start_number);

int main()
{
    int nString;
    scanf("%d",&nString);
    char equation[nString][100];
    for(int i=0;i<nString;i++)
    {
        scanf("%s",&equation[i]);
    }
    for(int i=0;i<nString;i++)
    {
        int result = calculate(equation[i]);
        is_odd(result);
    }


    return 0;
}
void is_odd(int number)
{
    printf("%d\n",number%2);
}
int calculate(char *equation)
{
    char c;
    int i=0;
    int total=0;
    int allnumber[100000];
    allnumber[0]=-1;
    int a=0,b=0;
    int allsign[100000];
    while(1)
    {
        c=equation[i];
        if(c=='\0')
        {
            break;
        }
        if(c=='+')
        {
            i++;
            c=equation[i];
            allsign[a]='+';
            a++;
            continue;

        }
        if(c=='*')
        {
            i++;
            c=equation[i];
            allsign[a]='*';
            a++;
            continue;
        }
        allnumber[b] = find_number(equation,&i);
        b++;
    }
    int count1;
    int k=0;
    int iter=a;
    int l=0;
    for(count1=0;count1<=a;count1++)
    {
        if(allsign[l]=='*')
        {
            allnumber[count1]*=allnumber[count1+1];
            for(k=count1+1;k<b;k++)
            {
                allnumber[k]=allnumber[k+1];
            }
            b--;
            for(int k=count1;k<a;k++)
            {
                //printf("%d %d\n",count1,a);
                allsign[k]=allsign[k+1];
            }
            a--;
            count1=0;
            l=0;
            continue;
        }
        l++;
    }
    l=0;
    for(count1=0;count1<=a;count1++)
    {
        if(allsign[a-count1]=='+')
        {
            allnumber[count1-1]+=allnumber[count1];
            for(k=count1+1;k<b;k++)
            {
                allnumber[k]=allnumber[k+1];
            }
            b--;
            for(int k=count1;k<a;k++)
            {
                allsign[k]=allsign[k+1];
            }
            a--;
            l=0;
            count1=0;
            continue;
        }
        l++;
    }







    return allnumber[0];
}
int find_number(char *equation,int *i)
{
    int number=0;
    char c = equation[*i];
    while(1)
    {
        //printf("%c   %d\n",c,*i);
        number = number + ( c - '0' );
        *i = *i + 1;
        c=equation[*i];
        if(c=='\0')
        {
            return number;
        }
        if(c=='+')
        {
            //printf("help pls %d\n",*i);
            return number;
        }
        if(c=='*')
        {
            return number;
        }
        number*=10;
    }
    return number;
}
