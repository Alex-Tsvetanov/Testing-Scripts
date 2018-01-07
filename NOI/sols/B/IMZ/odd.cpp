#include <iostream>
using namespace std;
bool Skip, BeforeWasMultiplication;
int AmountTasks, Results[11];
long long AmountOnes, EndMultiplication;
char Task[100001][11];
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> AmountTasks;
    for(int Counter = 1; Counter <= AmountTasks; Counter++){
        cin >> Task[Counter];
    }
    for(int Counter = 1; Counter <= AmountTasks; Counter++, BeforeWasMultiplication = false, Skip = false, AmountOnes = 0){
        for(long long SecondCounter = 0; Task[Counter][SecondCounter] != '\0'; SecondCounter++, EndMultiplication = SecondCounter){
            if(Task[Counter][SecondCounter] == '+'){
                if(BeforeWasMultiplication){
                    if(!Skip){
                        if(Task[Counter][SecondCounter - 1] == '1' or Task[Counter][SecondCounter - 1] == '3' or Task[Counter][SecondCounter - 1] == '5' or Task[Counter][SecondCounter - 1] == '7' or Task[Counter][SecondCounter - 1] == '9'){
                            AmountOnes++;
                        }
                    }
                    Skip = false;
                }
                if(!BeforeWasMultiplication){
                    if(Task[Counter][SecondCounter - 1] == '1' or Task[Counter][SecondCounter - 1] == '3' or Task[Counter][SecondCounter - 1] == '5'or Task[Counter][SecondCounter - 1] == '7'or Task[Counter][SecondCounter - 1] == '9'){
                        AmountOnes++;
                    }
                }
                BeforeWasMultiplication = false;
            }
            if(Task[Counter][SecondCounter] == '*'){
                BeforeWasMultiplication = true;
                if(Task[Counter][SecondCounter - 1] == '0' or Task[Counter][SecondCounter - 1] == '2' or Task[Counter][SecondCounter - 1] == '4' or Task[Counter][SecondCounter - 1] == '6' or Task[Counter][SecondCounter - 1] == '8'){
                    Skip = true;
                    for( ; Task[Counter][SecondCounter + 1] == '+' or Task[Counter][SecondCounter + 1] == '\0'; SecondCounter++) {}
                }
            }
        }
        if(!Skip and BeforeWasMultiplication){
            if(Task[Counter][EndMultiplication - 1] == '1' or Task[Counter][EndMultiplication - 1] == '3' or Task[Counter][EndMultiplication - 1] == '5' or Task[Counter][EndMultiplication - 1] == '7' or Task[Counter][EndMultiplication - 1] == '9'){
                AmountOnes++;
            }
        }
        if(!BeforeWasMultiplication){
            if(Task[Counter][EndMultiplication - 1] == '1' or Task[Counter][EndMultiplication - 1] == '3' or Task[Counter][EndMultiplication - 1] == '5' or Task[Counter][EndMultiplication - 1] == '7' or Task[Counter][EndMultiplication - 1] == '9'){
                AmountOnes++;
            }
        }
        if(AmountOnes % 2 == 0){
            Results[Counter] = 0;
        }else{
            Results[Counter] = 1;
        }
    }
    for(int Counter = 1; Counter <= AmountTasks; Counter++){
        cout << Results[Counter] << "\n";
    }
    return 0;
}
