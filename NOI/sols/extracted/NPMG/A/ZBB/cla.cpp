#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<short*> borders;

int main(){
    char cmd[12001];
    cin>>cmd;

    short moveBy = 0;
    short dir = 1; //0 down, 1 right, 2 up, 3 left
    short x = 0,y = 0;
    for(int k=0;; k++){
        if(cmd[k] == '\0' || cmd[k] == '+' || cmd[k] == '-'){
            short* border = new short(4);
            border[0] = x;
            border[1] = y;
            // {x,y,0,0};

            switch(dir){
            case 0: y -= moveBy; break;
            case 1: x += moveBy; break;
            case 2: y += moveBy; break;
            case 3: x -= moveBy; break;
            }

            border[2] = x;
            border[3] = y;

            borders.push_back(border);


            if(cmd[k] == '\0'){
                //logic
                return 0;
            } else {
                if(cmd[k] == '+'){
                    dir ++;
                } else {
                    dir --;
                }

                if(dir > 3){
                    dir = dir % 4;
                } else if (dir < 0){
                    dir += 4;
                }
            }

            moveBy = 0;
        } else {
            moveBy *= 10;
            moveBy += cmd[k] - 48;
        }
    }

    return 0;
}
