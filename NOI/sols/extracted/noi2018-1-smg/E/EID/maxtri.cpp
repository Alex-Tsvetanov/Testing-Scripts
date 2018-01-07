#include<iostream>
using namespace std;
int main(){
    long long a, b, c, stotici,desetici, edinici, tricifreno_chislo;
    cin>>a>>b>>c;
        if(a>=b and a>c){
                stotici=a;
                if(b>c){
                    desetici=b;
                    edinici=c;
               }else{
                    desetici=c;
                    edinici=b;
               }
        }
            if(b>a and b>=c){
                stotici=b;
                if(a>c){
                    desetici=a;
                    edinici=c;
               }else{
                    desetici=c;
                    edinici=a;
               }
        }
            if(c>=a and c>b){
                stotici=c;
                if(a>b){
                    desetici=a;
                    edinici=b;
               }else{
                    desetici=b;
                    edinici=a;
               }
        }
    tricifreno_chislo=100*stotici+10*desetici+edinici;
    cout<<tricifreno_chislo;
return 0;
}
