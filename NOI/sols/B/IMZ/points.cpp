#include <iostream>
using namespace std;
long long AmountRectangles, AmountPoints, RectanglesHeight[10001], RectanglesWidth[10001], PointsX[100005], PointsY[100005], MainX, AllowedYsInXs[1000001], Result;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> AmountRectangles >> AmountPoints;
    for(long long Counter = 1; Counter <= AmountRectangles; Counter++){
        cin >> RectanglesWidth[Counter] >> RectanglesHeight[Counter];
    }
    for(long long Counter = 1; Counter <= AmountPoints; Counter++){
        cin >> PointsX[Counter] >> PointsY[Counter];
    }

    for(long long Counter = 1, LastX; Counter <= AmountRectangles; Counter++){
        LastX = MainX + RectanglesWidth[Counter];
        if(RectanglesHeight[Counter] >= RectanglesHeight[Counter - 1]){
            if(RectanglesHeight[Counter] >= RectanglesHeight[Counter + 1]){
            for(long long SecondCounter = MainX; SecondCounter <= LastX; SecondCounter++){
                AllowedYsInXs[SecondCounter] = RectanglesHeight[Counter];
            }
            }else{
                for(long long SecondCounter = MainX; SecondCounter < LastX; SecondCounter++){
                    AllowedYsInXs[SecondCounter] = RectanglesHeight[Counter];
                }
            }
        }else{
            if(RectanglesHeight[Counter] >= RectanglesHeight[Counter + 1]){
                for(long long SecondCounter = MainX + 1; SecondCounter <= LastX; SecondCounter++){
                    AllowedYsInXs[SecondCounter] = RectanglesHeight[Counter];
                }
            }else{
                for(long long SecondCounter = MainX + 1; SecondCounter < LastX; SecondCounter++){
                    AllowedYsInXs[SecondCounter] = RectanglesHeight[Counter];
                }
            }
        }
        MainX = LastX;
    }
    for(long long Counter = 1; Counter <= AmountPoints; Counter++){
        if(AllowedYsInXs[PointsX[Counter]] >= PointsY[Counter] and PointsX[Counter] <= MainX){
            Result++;
        }
    }
    cout << Result << "\n";
    return 0;
}
