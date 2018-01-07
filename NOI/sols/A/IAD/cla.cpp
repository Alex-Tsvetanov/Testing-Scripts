#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int xdir = 1;
int ydir = 0;
int xpos = 0;
int ypos = 0;
int xnxt[3][3];
int ynxt[3][3];
int xpre[3][3];
int ypre[3][3];
void rot(char dir)
{
    if(dir == '-')
    {
        int save = xdir;
        xdir = xnxt[xdir][ydir];
        ydir = ynxt[save][ydir];
    }
    if(dir == '+')
    {
        int save = xdir;
        xdir = xpre[xdir][ydir];
        ydir = ypre[save][ydir];
    }
}
int xpoints[12000];
int ypoints[12000];
int pl = 1;
long double area;
long double len(int ax, int ay, int bx, int by)
{
    return sqrt(abs(ax-bx)*abs(ax-bx)+abs(ay-by)*abs(ay-by));
}
long double find_tr(int ax, int ay, int bx, int by, int cx, int cy)
{
    long double c = len(ax, ay, bx, by), b = len(ax,ay,cx,cy), a = len(bx,by,cx,cy);
    long double p = (a+b+c)/2.;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
int side(int x, int y, int bx, int by)
{
    if(bx == 0) return side(x,y,xpoints[2],ypoints[2]);
    long double b = double(x)*double(by)/double(bx);
    if(b>y) return -1;
    else return 1;
}
string inp;
int main()
{
    xnxt[1][0] = 0;
    ynxt[1][0] = -1;

    xnxt[0][-1] = -1;
    ynxt[0][-1] = 0;

    xnxt[-1][0] = 0;
    ynxt[-1][0] = 1;

    xnxt[0][1] = 1;
    ynxt[0][1] = 0;

    xpre[0][-1] = 1;
    ypre[0][-1] = 0;

    xpre[-1][0] = 0;
    ypre[-1][0] = -1;

    xpre[0][1] = -1;
    ypre[0][1] = 0;

    xpre[1][0] = 0;
    ypre[1][0] = 1;

    cin >> inp;
    int tmp = 0;
    inp += '+';
    for(int i = 0; i < inp.size(); i ++)
    {
        if(inp[i] == '+' || inp[i] == '-')
        {
            //cout << xpos << "," << ypos << " " << xdir << "," << ydir << " " << tmp << endl;
            if(xpoints[pl-1] != xpos || ypoints[pl-1] != ypos) xpoints[pl] = xpos;
            if(ypoints[pl-1] != ypos || xpoints[pl-1] != xpos) ypoints[pl ++] = ypos;
            xpos += xdir*tmp;
            ypos += ydir*tmp;
            rot(inp[i]);
            tmp = 0;
        }
        else
        {
            tmp *= 10;
            tmp += (inp[i]-'0');
        }
    }

    for(int i = 2; i < pl; i ++)
    {
        //cout << i << " " << side(xpoints[i],ypoints[i],xpoints[i-1],ypoints[i-1]) << " " << find_tr(xpoints[i],ypoints[i],xpoints[i-1],ypoints[i-1],xpoints[0],ypoints[0]) << endl;
        area += side(xpoints[i],ypoints[i],xpoints[i-1],ypoints[i-1])*find_tr(xpoints[i],ypoints[i],xpoints[i-1],ypoints[i-1],xpoints[0],ypoints[0]);
    }
    cout << abs(area) << endl;
}
