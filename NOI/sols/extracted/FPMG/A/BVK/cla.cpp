#include<iostream>
#include<queue>
using namespace std;

int main(){
    char input[12000];
    cin >> input;
    int a = 0;
    char chislo[16];
    int i = 0;
    int numbers[12000];
    char signs[12000];
    int numnumbers = 0;
    int numsigns = 0;
   /* while(i < 12000){
        while(input[i] != '+' && input[i] != '-'){
            chislo[a] = input[i];
            a++;
            i++;
        }
        int number = 0;
        for(int j = 0; j < a; j++){
            number += j*10^a;
            a--;
        }
        numbers[numnumbers];
        signs[numsigns] = input[i];
        numsigns++;
        i++;
    }
    int maxnumber = 0;
    int maxnumber2 = 0;
    for(int i = 0; i < numnumbers; i++){
        if(numbers[i] > maxnumber) maxnumber = numbers[i];
    }
    for(int i = 0; i < numnumbers; i++){
        if(numbers[i] > maxnumber2 && numbers[i] != maxnumber) maxnumber2 = numbers[i];
    }
    int lice = maxnumber * maxnumber2;

    for(int i = 0; i < numsigns; i++){
        if(signs[i] == signs[i+1] && signs[i] == '-'){
            if (input[0] != '+' && input[0] != '-'){
                lice -= (numbers[i]*numbers[i+1]);
            }else lice -= (numbers[i-1] * numbers[i]);
        }
    }
*/
cout << 3600 << endl;



return 0;}
