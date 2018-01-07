#include<iostream>
using namespace std;

int main(){
long long brHora,brTroini,brDvoini;
cin>>brHora;
if(brHora%3==1){
    brTroini=brHora/3-1;///виж по-надолу защо е -1
    brDvoini=2;
///Когато остатъкът е 1 , то тогава ще вземем 1та тройка за да можем да разделим на 2 двойни стаи
}else if(brHora%3==2){
    brTroini=brHora/3;
    brDvoini=1;
///Когато остатъкът е 2 , имаме нужда от точно 1 двойна стая (така е винаги , защото ни трябват максимално много тройни)
}else if(brHora%3==0){
    brTroini=brHora/3;
    brDvoini=0;
///Когато се дели точно , нямаме нужда от двойни стаи.
}

cout<<brDvoini<<" "<<brTroini<<"\n";
return 0;
}
