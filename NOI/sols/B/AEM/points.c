#include <stdio.h>
#include <stdlib.h>
struct square_t{
    int startingPoint;
    int height;
    int wight;
};
struct point_t{
    int height;
    int wight;
};
int main()
{
    int nSquares,mPoints;

    scanf("%d%d",&nSquares,&mPoints);
    struct square_t square[nSquares];
    struct point_t point[mPoints];

    int lenght=0;
    int totalPoints=0;

    square[0].startingPoint = lenght;
    scanf("%d%d",&square[0].wight,&square[0].height);
    //take squares
    for(int i=1;i<nSquares;i++)
    {
        square[i].startingPoint = lenght;
        scanf("%d%d",&square[i].wight,&square[i].height);
        lenght+=square[i].wight;
    }

    //take points
    for(int i=0;i<mPoints;i++)
    {
        scanf("%d%d",&point[i].wight,&point[i].height);
        //check points
        for(int j=0;j<nSquares;j++)
        {
            if(square[j].startingPoint <= point[i].wight &&
               square[j].startingPoint + square[j].wight >= point[i].wight)
            {
                if(square[j].height >= point[i].height)
                {
                    totalPoints++;
                    break;
                }
            }
            else
            {
                continue;
            }
        }
    }

    printf("\n%d",totalPoints);

    return 0;
}
