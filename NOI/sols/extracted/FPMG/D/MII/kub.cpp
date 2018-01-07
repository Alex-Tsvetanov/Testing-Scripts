#include<iostream>
using namespace std;
int main () {
long long A,B,C,ObshtoKubcheta,Kubcheta_S_Neboqdisani_Steni,VunshniKubcheta,Kubcheta_S_Edna_Boqdisana_Stena,Kubcheta_S_Shest_Boqdisani_Steni=0;
long long Kubcheta_S_Dve_Boqdisani_Steni,Kubcheta_S_Tri_Boqdisani_Steni,Kubcheta_S_Chetiri_Boqdisani_Steni=0,Kubcheta_S_Pet_Boqdisani_Steni=0;
cin>>A;
cin>>B;
cin>>C;
ObshtoKubcheta=(A*B)*C;
VunshniKubcheta=((A*B)*B)-(((A-2)*(B-2))*C);
if(C==2){
Kubcheta_S_Neboqdisani_Steni=0;
}else{
Kubcheta_S_Neboqdisani_Steni=ObshtoKubcheta-VunshniKubcheta;
}
if(A>2){
Kubcheta_S_Edna_Boqdisana_Stena=((A-2)*(B-2))*C;
}else{
Kubcheta_S_Edna_Boqdisana_Stena=(B-2)*C;
}
Kubcheta_S_Dve_Boqdisani_Steni=(2*A+2*B-4)+((2*A+2*B-4)-B)+(((2*A+2*B-4)-B)-A)+(((2*A+2*B-4)-B)-A)+((((2*A+2*B-4)-B)-A)-B);
if(C==1){
Kubcheta_S_Tri_Boqdisani_Steni=4;
}else{
Kubcheta_S_Tri_Boqdisani_Steni=8;
}


cout<<Kubcheta_S_Neboqdisani_Steni<<endl<<Kubcheta_S_Edna_Boqdisana_Stena<<endl<<Kubcheta_S_Dve_Boqdisani_Steni<<endl<<Kubcheta_S_Tri_Boqdisani_Steni<<endl<<Kubcheta_S_Chetiri_Boqdisani_Steni<<endl;
cout<<Kubcheta_S_Pet_Boqdisani_Steni<<endl<<Kubcheta_S_Shest_Boqdisani_Steni<<endl;
return 0;
}
