#include <iostream>

using namespace std;

int main(){

    unsigned long totalPoints = 0;

    unsigned N;
    unsigned long M;
    unsigned long i,j;
    cin>>N>>M;

    unsigned rects[N][2];
    for(i=0;i<N;++i){
        cin>>rects[i][0]>>rects[i][1];
    }

    unsigned long points[M][2];
    for(i=0;i<M;++i){
        cin>>points[i][0]>>points[i][1];
    }

    for(i=0;i<M;++i){
        unsigned point[] = {points[i][0],points[i][1]};
        unsigned totalRectWidth = 0;
        for(j=0;j<N;++j){
            unsigned rect[] = {rects[j][0],rects[j][1]};

            if( point[0] >= totalRectWidth &&
             point[0] <= totalRectWidth + rect[0] &&
             point[1] <= rect[1]){
                 ++totalPoints;
             }

            totalRectWidth+=rect[0];
        }
    }
    cout<<totalPoints;
    return 1;
}
