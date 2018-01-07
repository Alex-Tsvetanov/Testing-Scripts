#include<iostream>
#include<vector>
using namespace std;
vector<int> A;
vector<int> B;
vector<int> C;
vector<int> copyOfA;
vector<int> copyOfB=B;
vector<int> copyOfC=C;
void fromAtoC()
{
    C.push_back(A.at(0));
    A.erase(A.begin());
}
void fromCtoB()
{
    B.push_back(C.at(C.size()-1));
    C.pop_back();
}
bool canBeReached(int permutation[])
{
    for(int i=0;i<permutation[0];i++)
    {
        fromAtoC();
    }
    fromCtoB();
    int permCounter = 1;
    while(A.size()||C.size())
    {
        if(permutation[permCounter]>permutation[permCounter-1])
        {
            int currentSize = A.size();
            for(int i=0;i<currentSize;i++)
            {
                fromAtoC();
                if(C.at(C.size()-1)==permutation[permCounter])
                {
                    break;
                }
            }
            fromCtoB();

        }
        if(permutation[permCounter]<permutation[permCounter-1])
        {
            if(C.size()&&C.at(C.size()-1)==permutation[permCounter])
            {
                fromCtoB();
            }
            else
            {
                //A=copyOfA;
                return 0;
            }
        }
        permCounter++;
    }
    //A=copyOfA;
    return 1;
}
int main()
{
    int n;
    cin>>n;
    int perm1[n];
    int perm2[n];
    int perm3[n];
    int perm4[n];
    int perm5[n];
    int i = 0;
    for(int i=0;i<n;i++)
    {
        A.push_back(i+1);
    }
    copyOfA=A;
    for(i=0;i<n;i++)
    {
        cin>>perm1[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>perm2[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>perm3[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>perm4[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>perm5[i];
    }
    A=copyOfA;
    B=copyOfB;
    C=copyOfC;
    cout<<canBeReached(perm1);
    A=copyOfA;
    B=copyOfB;
    C=copyOfC;
    cout<<canBeReached(perm2);
    A=copyOfA;
    B=copyOfB;
    C=copyOfC;
    cout<<canBeReached(perm3);
    A=copyOfA;
    B=copyOfB;
    C=copyOfC;
    cout<<canBeReached(perm4);
    A=copyOfA;
    B=copyOfB;
    C=copyOfC;
    cout<<canBeReached(perm5);
    A=copyOfA;
    B=copyOfB;
    C=copyOfC;
}
