#include<iostream>
using namespace std;
int main()
{
long long cislo1, cislo2, cislo3, ngcislo, stotici, desetici, edinici;
cout<<"Napisete tri cifri i ste vidite nai-golamoto cislo ot tqh";
cin>>cislo1>>cislo2>>cislo3;
if(cislo1>cislo2){
if(cislo1>cislo3){
stotici=cislo1;
if(cislo2>cislo3){
    desetici=cislo2;
edinici=cislo3;
}else{
desetici=cislo3;
edinici=cislo2;
}
}else{
if(cislo3>cislo2){
    stotici=cislo3;
    desetici=cislo1;
edinici=cislo2;
}else{
desetici=cislo1;
edinici=cislo2;
stotici=cislo3;
}
}
}else{
if(cislo2>cislo3){
    stotici=cislo1;
    desetici=cislo2;
edinici=cislo1;
}else{
desetici=cislo1;
edinici=cislo3;
stotici=cislo2;
}
}if(cislo3>cislo1){
if(cislo3>cislo2){
stotici=cislo3;
if(cislo2>cislo1){
    desetici=cislo2;
edinici=cislo1;
}else{
desetici=cislo1;
edinici=cislo2;
}
}else{
if(cislo1>cislo2){
    stotici=cislo1;
    desetici=cislo2;
edinici=cislo3;
}else{
desetici=cislo1;
edinici=cislo3;
stotici=cislo2;
}
}
}
if(cislo2>cislo1){
if(cislo2>cislo3){
stotici=cislo2;
if(cislo3>cislo1){
    desetici=cislo3;
edinici=cislo1;
}else{
desetici=cislo1;
edinici=cislo3;
}
}else{
if(cislo1>cislo3){
    stotici=cislo1;
    desetici=cislo3;
edinici=cislo2;
}else{
desetici=cislo2;
edinici=cislo1;
stotici=cislo3;
}
}
}else{
if(cislo2>cislo3){
if(cislo1>cislo3){
    stotici=cislo1;
    desetici=cislo2;
edinici=cislo3;
}else{
desetici=cislo1;
edinici=cislo2;
stotici=cislo3;
}
}
else{
if(cislo1>cislo3){
    stotici=cislo1;
    desetici=cislo2;
edinici=cislo3;
}else{
desetici=cislo1;
edinici=cislo2;
stotici=cislo3;
}
}
}
if(cislo3>cislo1){
if(cislo3>cislo2){
stotici=cislo3;
if(cislo2>cislo1){
    desetici=cislo2;
edinici=cislo1;
}else{
desetici=cislo1;
edinici=cislo2;
}
}else{
if(cislo1>cislo2){
    stotici=cislo1;
    desetici=cislo2;
edinici=cislo3;
}else{
desetici=cislo1;
edinici=cislo3;
stotici=cislo2;
}
}
}else{
if(cislo1>cislo2){
    stotici=cislo1;
    desetici=cislo2;
edinici=cislo3;
}else{
desetici=cislo1;
edinici=cislo3;
stotici=cislo2;
}
}
ngcislo=stotici*100+desetici*10+edinici*1;
cout<<ngcislo<<" e nai-golamoto cislo ot "<<cislo1<<", "<<cislo2<<" i "<<cislo3;
return 0;
}