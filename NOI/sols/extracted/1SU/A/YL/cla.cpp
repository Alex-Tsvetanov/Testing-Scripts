#include<vector>
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
struct point{
    long long x, y;
};
long long ol2(point a, point b, point c){
    long long trapecAB=(b.x+a.x)*(b.y-a.y);
    long long trapecBC=(b.x+c.x)*(c.y-b.y);
    long long trapecCA=(c.x+a.x)*(a.y-c.y);
    return trapecAB+trapecBC+trapecCA;
}
char left(char c){
    if(c=='u') return 'l';
    if(c=='l') return 'd';
    if(c=='d') return 'r';
    if(c=='r') return 'u';
}
char right(char c){
    if(c=='u') return 'r';
    if(c=='r') return 'd';
    if(c=='d') return 'l';
    if(c=='l') return 'u';
}
vector<point> po;
string s;
int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    char posoka='r';
    cin>>s;
    long long area=0, crntNum=0, crntX=0, crntY=0;
    point t;
    t.x=0;
    t.y=0;
    po.push_back(t);
    for(int i=0;i<s.size();i++){
        if(s[i]=='+'){
            if(crntNum!=0){
                if(posoka=='r'){
                    crntX+=crntNum;
                }
                if(posoka=='l'){
                    crntX-=crntNum;
                }
                if(posoka=='u'){
                    crntY+=crntNum;
                }
                if(posoka=='d'){
                    crntY-=crntNum;
                }
                crntNum=0;
                point uj;
                uj.x=crntX;
                uj.y=crntY;
                po.push_back(uj);
            }
            posoka = left(posoka);
        }
        if(s[i]=='-'){
            if(crntNum!=0){
                if(posoka=='r'){
                    crntX+=crntNum;
                }
                if(posoka=='l'){
                    crntX-=crntNum;
                }
                if(posoka=='u'){
                    crntY+=crntNum;
                }
                if(posoka=='d'){
                    crntY-=crntNum;
                }
                crntNum=0;
                point uj;
                uj.x=crntX;
                uj.y=crntY;
                po.push_back(uj);
            }
            posoka = right(posoka);
        }
        if('0'<=s[i]&&s[i]<='9'){
            crntNum*=10;
            crntNum+=s[i]-'0';
        }
    }
    for(int i=2;i<po.size();i++){
        area+=ol2(po[0], po[i-1], po[i]);
    }
    if(area<0) area=-area;
    if(area%2==0){
        cout<<area/2<<"\n";
    }else{
        cout<<area/2<<".5\n";
    }
    return 0;
}
