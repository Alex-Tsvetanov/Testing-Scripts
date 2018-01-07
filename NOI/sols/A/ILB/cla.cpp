#include <iostream>
#include <cstring>
#include <string>
#include <assert.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <queue>
#include <cmath>
#include <stdio.h>

#define _ << " " <<
#define debug(x) #x << " = " << x

#define ll long long
#define ull unsigned long long

struct move_t
{
    int dx, dy;
};

bool operator == (const move_t& a, const move_t& b)
{
    return a.dx == b.dx && a.dy == b.dy;
}

const move_t right = {1, 0},
             left = {-1, 0},
             up = {0, 1},
             down = {0, -1};

move_t rotate_ccw(const move_t& cur)
{
    if (cur == right)
        return up;
    if (cur == up)
        return left;
    if (cur == left)
        return down;
    if (cur == down)
        return right;

    std::exit(-1);
}

move_t rotate_cw(const move_t& cur)
{
    if (cur == left)
        return up;
    if (cur == up)
        return right;
    if (cur == right)
        return down;
    if (cur == down)
        return left;

    std::exit(-1);
}

struct point
{
    int x, y;
};

int toint(std::string s)
{
    int r = 0;
    for (auto x : s)
        (r *= 10) += x - '0';
    return r;
}

std::vector<point> parse(std::string in)
{
    int i = 0;
    move_t move = right;
    point cur = {0, 0};

    std::vector<point> result;

    for (; i < (int)in.length();)
    {
        if (in[i] == '+')
        {
            ++i;
            move = rotate_ccw(move);
        } else if (in[i] == '-')
        {
            ++i;
            move = rotate_cw(move);
        } else
        {
            int j = i;
            for (; j < (int)in.length() && '0' <= in[j] && in[j] <= '9'; j++);

            int delta = toint(in.substr(i, j - i));
            cur.x += move.dx * delta;
            cur.y += move.dy * delta;

            result.push_back(cur);

            i = j;
        }
    }

    return result;
}

bool operator < (const point& a, const point& b)
{
    return a.y < b.y;
}

int main()
{
    std::ios::sync_with_stdio(false);

    std::string s;
    std::cin >> s;

    auto pts = parse(s);

    std::sort(pts.begin(), pts.end(), [] (const point& a, const point& b) { return a.x == b.x ? (a.y < b.y) : (a.x < b.x); });

    std::set<int> ss;

    int i = 0;
    int n = pts.size();

    int last_x = -1e9;
    int slx = last_x;

    ll area = 0;

    for (; i < n;)
    {
        ll sum_vert = 0;
        int prev = slx;
        for (auto x : ss)
        {

            if (prev == slx)
            {
                prev = x;
            } else
            {
                sum_vert += x - prev;
                prev = slx;
            }
        }

        int j = i;
        for (; j < n && pts[j].x == pts[i].x; j++)
        {
            if (ss.count(pts[j].y))
                ss.erase(pts[j].y);
            else
                ss.insert(pts[j].y);
        }

        int cur_x = pts[i].x;
        i = j;

        if (slx != last_x)
            area += sum_vert * (cur_x - last_x);

        last_x = cur_x;
    }

   // assert(ss.size() == 0);
    std::cout << area << std::endl;

    return 0;
}
