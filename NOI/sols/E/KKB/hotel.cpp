#include <iostream>
using namespace std;
int main(){
long long students,roomsForThree,roomsForTwo;
cin>>students;
if(students%3==0){
    roomsForThree=students/3;
    roomsForTwo=0;
}else{
if(students%3==2){
    roomsForThree=students/3;
    roomsForTwo=1;
}
if(students%3==1){
    roomsForThree=(students/3)-1;
    roomsForTwo=2;
}
}

cout<<roomsForTwo<<" "<<roomsForThree;
return 0;
}
