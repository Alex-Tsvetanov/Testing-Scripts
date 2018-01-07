#include <iostream>
using namespace std;
int main(){
long long problems,time,easyProblems,timeFor1HardProblem,timeForHardProblems,hardProblems,readyHardProblems;
cin>>problems>>time>>easyProblems>>timeFor1HardProblem;
timeForHardProblems=time-1;
hardProblems=problems-easyProblems;
timeForHardProblems=timeForHardProblems*60;
if(hardProblems*timeFor1HardProblem==timeForHardProblems){
    cout<<"EXACT!";
}
if(hardProblems*timeFor1HardProblem<timeForHardProblems){
    cout<<"YES"<<endl<<timeForHardProblems-hardProblems*timeFor1HardProblem;
}
if(hardProblems*timeFor1HardProblem>timeForHardProblems){
 readyHardProblems=timeForHardProblems/timeFor1HardProblem;
 readyHardProblems=hardProblems-readyHardProblems;
    cout<<"NO"<<endl<<hardProblems*timeFor1HardProblem-timeForHardProblems<<endl<<readyHardProblems;
}


return 0;
}
