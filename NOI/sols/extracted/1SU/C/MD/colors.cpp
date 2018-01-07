#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int num[100001];
int number[100001];
int countnumber[100001];
vector<int> ans;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int k;
    cin >> n >> k;
    for (int i=0; i<n; i++){
        int m;
        cin >> m;
        num[i]=m;
    }
    sort(num, num+n);
    int last = upper_bound(num, num+n, num[0]) - num;
    int j=0;
    int i=0;
    if(last>n-1){
        for(int r=0; r<k; r++){
            cout << num[r] << " ";
        }
    }
    else{
        while(last<n){
            number[i] = num[j];
            countnumber[i] = last-j;
            i++;
            j=last;
            last=upper_bound(num, num+n, num[j]) - num;
        }
        number[i] = num[j];
        countnumber[i] = n-j;
        i++;
        if(i<k){
            for(int h=0; h<i; h++){
                ans.push_back(number[h]);
                countnumber[h]--;
            }
            k-=i;
            int z=0;
            while(k>0){
                if(countnumber[z]!=0){
                    ans.push_back(number[z]);
                    countnumber[z]--;
                    k--;
                }
                else{
                    z++;
                }

            }
        }
        else if(i==k){
            for(int h=0; h<k; h++){
                cout << number[h] << " ";
            }
        }
        else{
            for(int h=0; h<k; h++){
                ans.push_back(number[h]);
                countnumber[h]--;
            }
        }
        sort(ans.begin(), ans.end());
        for(int l=0; l<ans.size(); l++){
            cout << ans[l] << " ";
        }
    }

    cout << endl;
    return 0;
}
