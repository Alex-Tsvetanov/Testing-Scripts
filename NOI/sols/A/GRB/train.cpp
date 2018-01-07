#include<iostream>
using namespace std;

void ChangeAC(int A[], int B[], int C[],int i, int j, int f,int p[][100000],int g, int flag,int otg[],)
{
  for(int h=0; h<p[g][0]; h++)
  {
        C[j]=A[i];
        A[i]=0;
        j--;
        i++;
  }
  ChangeCB;
}
void ChangeCB(int A[], int B[], int C[],int i, int j, int f,int p[][100000],int g, int flag,int otg[])
{
  for(int h=0; h<p[g][n-1]; h++)
  {
      B[f]=C[j+1];
      f++;
      j++;
  }
  if(A[n-1]!=0)
  {
      ChangeAC;
  }
  else
  {
      if(C[3*n]!=0)
      {
          otg[flag]=0;
          flag++;
          g++;
          ChangeAC;
      }
      else
      {
      otg[flag]=1;
      flag++;
      g++;
      ChangeAC;
      }
  }
}
int main()
{
    int n;
    int j=3*n;
    int i=0;
    int f=0;
    int g=0;
    int flag=0;
    int otg[5];
    cin>>n;
    if(n<1||n>100000)
    {
        cout<<"invalid input";
    }
    int A[n];
    int B[n];
    int C[3*n];
    int p[5][n];
    for(int i=0; i<5; i++)
   {
      for(int j=0; j<n; j++)
      {
          cin>>p[i][j];
      }
   }
    for(int i=0; i<n; i++)
   {
     A[i]=0;
     B[i]=0;
   }
    for(int i=0; i<3*n; i++)
   {
     C[i]=0;
   }
   ChangeAC(A[],B[],C[],j,i,f,p[5][n],g,flag,otg[]);
   for(int i=0; i<5; i++)
   {
       cout<<otg[i];
   }
  return 0;
}
