#include<iostream>

using namespace std;

struct point
{
    float x, y;
};

struct line
{
    point p1, p2; // nesting
};

struct traingle
{
    point p1, p2, p3;
};


int main()
{
    point p1;
    p1.x = 9;
    p1.y = 5;

    line l1;
    l1.p1.x = 2;
    l1.p1.y = 6;
    l1.p2.x = 0;
    l1.p2.y = 2;

    traingle t1;
    t1.p1.x = 0;
    t1.p1.y = 7;
    t1.p2.x = 6;
    t1.p2.y = 3;
    t1.p3.x = 3;
    t1.p3.y = 0;    
}