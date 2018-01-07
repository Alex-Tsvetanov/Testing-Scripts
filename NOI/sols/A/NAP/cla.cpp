#include <iostream>
#include <vector>
#include <queue>
#include <math.h>

using namespace std;

 #define fw 0
 #define down 1
 #define right 2
 #define left 3
int rot(int curr, int change);
int trans(string &chars);
pair<int,int> coords(int dir, int step, int x, int y);


int main(){

    cout<<'0'<<" - "<<int('0')<<" 1 "<<" - "<<int('1')<<" 9 - "<<int('9')<<endl;
    string path;
    cin>>path;

    int x1,y1,x2,y2;
    x1 = 0;
    y1 = 0;
    int orient = right;
    int currn;
    int dir = -1;
    bool first = 0;
    long long S=0;
    bool sign = 0;

    for(int i=0; i<path.size(); i++){


        if(path[i] == '-' || path[i] == '+'){

            //cout<<path[i]<<endl;
            if(path[i] == '+'){
                orient = rot(orient, left);
            }
            else if(path[i] == '-'){
                orient = rot(orient, right);
            }

        }
        if((path[i] >= '1' && path[i] <= '9') || path[i] == '0'){

            string chars;
            while((path[i] >= '1' && path[i] <= '9') || path[i] == '0'){

                chars.push_back(path[i]);
                i++;
            }
            i--;
            currn = trans(chars);
            //cout<<currn<<endl;

            if(first){
            x1 = x2;
            y1 = y2;
            first = 0;
        }

        if(!first){

            pair<int,int> newc = coords(orient, currn, x1,y1);
            x2 = newc.first;
            y2 = newc.second;

            first = 1;
        }

        if(orient == fw || orient == down){
            if(orient!= dir){

                if(sign) sign = 0;
                else sign = 1;
                dir = orient;
            }

            int dy = fabs(y1-y2);
            int dx = fabs(x1);
            int s = dy*dx;
            if(sign) s*=(-1);
            S+=s;


        }

        }




    }

    cout<<fabs(S)<<endl;

}

int trans(string & chars){

    int ciff  = chars.size();
    int num = 0;
    int step = 1;
    for(int i=0; i<ciff; i++){

        int n = chars[chars.size()-1-i] - 48;
        num+= n*step;
        step*=10;


    }

    return num;
}

pair<int,int> coords(int orient, int step, int x, int y){

    pair<int, int> res;
    res.first = x;
    res.second = y;
    if(orient == right){

        res.first = x+step;

    }
    if(orient == left){

        res.first = x-step;
    }

    if(orient == fw){

        res.second = y+step;
    }

    if(orient == down){

        res.second = y-step;
    }

    return res;
}
int rot(int curr, int change){

    if(curr == fw){

        //cout<<"here"<<endl;
        if(change == right){
            curr = right;
           // cout<<"change to right"<<endl;
        }
        if(change == left){

            curr = left;
           // cout<<"change to left"<<endl;
        }
    }

    else if(curr == down){

        if(change == right){
            curr = left;
        }
        if(change == left){
            curr = right;
        }
    }

    else if(curr == left){

        if(change == right){
            curr = fw;
        }
        if(change == left){
            curr = down;
        }
    }

    else if(curr == right){

        if(change == right){

            curr = down;
        }

        if(change == left){
            curr = fw;
        }
    }
    return curr;
}


/*
100+40+40+20-20-20+40+40
-100+40+40+20-20-20+40+40
+100+40+40+20-20-20+40+40
*/
