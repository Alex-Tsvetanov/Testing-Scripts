#include <stdio.h>
#include <algorithm>
using namespace std;

char in[12000];
int positionX = 16384;
int positionY = 16384;
int border[4] = {-1, 32769, 32769, -1};
short currentPos = 0;
short lastPos1 = -1;
short lastPos2 = -1;
bool arr[32768][32768];
int res = 0;

void cut(int len){
    switch(currentPos){
    case 0:
        border[0] = max(border[0], positionX + len);
        for(int p = 0;  p < len;  p++)
            arr[positionX+p][positionY] = true;
        positionX = positionX+len-1;

        break;
    case 1:
        border[1] = min(border[1], positionY - len);
        for(int p = 0;  p < len;  p++)
            arr[positionX][positionY-p] = true;
        positionY =  positionY-len+1;

        break;
    case 2:
        border[2] = min(border[2], positionX - len);
        for(int p = 0;  p < len;  p++)
            arr[positionX-p][positionY] = true;
        positionX =  positionX-len+1;

        break;
    case 3:
        border[3] = max(border[3], positionY + len);
        for(int p = 0;  p < len;  p++)
            arr[positionX][positionY+p] = true;
        positionY =  positionY+len-1;

        break;
    }
}

int main() {
    scanf("%s", &in);
    int z = -1;
    int i;
    for(i = 0;  in[i] != NULL;  i++){
        if(in[i] == '+' || in[i] == '-'){
            if(z != -1){
                cut(z);
                z = -1;
            }

            if(in[i] == '+')
                currentPos--;
            else
                currentPos++;

            currentPos = (currentPos+4)%4;

            if(lastPos2 == currentPos)
                cut(2);

            lastPos2 = lastPos1;
            lastPos1 = currentPos;
        } else {
            if(z == -1)
                z = ((int) in[i]) - 48;
            else
                z = z*10 + ((int) in[i]) - 48;
        }


    }
    i--;
    if(in[i] != '+' && in[i] != '-'){
        if(z != -1)
            cut(z);
    }

    int add = 0;
    int to_remove = 0;
    for(int p = border[3]-1;  p > border[1];  p--){
        add = 0;
        to_remove = 0;
        //printf("%04d  ", p-border[3]);
        for(i = border[2]+1;  i < border[0];  i++){
            if(arr[i][p]){
                if(arr[i-1][p]){
                    if(arr[i][p-1])
                        add = 0;
                    else
                        add = 1;
                } else
                    if(arr[i][p-1])
                        add = (++add)%2;
            }

            if(arr[i][p] == false)
                arr[i][p] = add;

            res += arr[i][p];
            if(((arr[i-1][p]) && arr[i][p] == 0) || (arr[i][p] && arr[i][p+1] == 0 && p != border[3]-1)){
                to_remove++;
                //printf("|");
            }

            //printf("%d", arr[i][p]);
        }
        //res -= (bord_num/2 - 1);
        //printf("\n");
        res -= to_remove;
    }
    //printf("\n\n\n%d\n%d",arr[border[2]][border[1]], arr[border[0]][border[1]]);
    res--;
    printf("\n\n\n%d\n", res);


    //printf("%d  %d", arr[border[2]+41-1][border[3]] && arr[border[2]+41][border[3]+1]);
	return 0;
}
