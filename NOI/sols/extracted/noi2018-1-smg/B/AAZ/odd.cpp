#include<iostream>
#include<cstring>
using namespace std;
char expressions[1000][12];
int to_num(char *);
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int k = 0;
        cin>>expressions[i];
        char s_expr[1000][1001], signs[1000];
        for(int j=0; j<strlen(expressions[i]); j++)
        {
            if(expressions[i][j]<'0' || expressions[i][j]>'9')
            {
                signs[k++] = expressions[i][j];
            }
            else
            {
                s_expr[k][j]=expressions[i][j];
            }
        }
        int result=0;
        for(int j=0; j<k-1; j++)
        {
            if(signs[j]=='*')
            {
                if(to_num(s_expr[j])%2!=0  && to_num(s_expr[j+1])%2!=0)
                {
                    result = 1;
                } else {
                    result = 0;
                }
            } else if(signs[j]=='+')
            {
                if((to_num(s_expr[j]) + to_num(s_expr[j+1])) %2 == 0)
                {
                    result = 1;
                } else {
                    result = 0;
                }
            }
        }
        cout<<result<<"\n";
    }

    return 0;
}

int to_num(char* num)
{
    int result=0;
    for(int i=0; i<strlen(num); i++)
    {
        result = result*10 + (num[i] - '0');
    }
    return result;
}
