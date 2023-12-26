#include<graphics.h>
#include<iostream>
#include <math.h>

class draw
{
public:
    float dx, dy, x_inc, y_inc, steps;
    int x1,x2,y1,y2;
    void getdata();
    void ddaline(int x1, int x2, int y1, int y2);
    void Bresanham_Algo(int xc, int yc, int r);
};


void draw:: ddaline(int x1,int y1,int x2,int y2)
{
    float x, y;
    dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) >= abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);

    int x_inc = dx / steps;
    int y_inc = dy / steps;
    x = x1;
    y = y1;

    for ( int i = 0; i < steps; i++ )
    {
        putpixel(x, y, 15);
        x = x + x_inc;
        y = y + y_inc;
    }
}


void draw :: Bresanham_Algo(int xc, int yc, int r)
{
    int x,y,d;
    x=0;
    y=r;
    putpixel(xc+x,yc-y,15);

    d=3-2*r;
    do
    {
        putpixel(xc+x,yc+y,15);
        putpixel(xc-x,yc-y,15);
        putpixel(xc+x,yc-y,15);
        putpixel(xc-x,yc+y,15);
        putpixel(xc+y,yc-x,15);
        putpixel(xc-y,yc-x,15);
        putpixel(xc+y,yc+x,15);
        putpixel(xc-y,yc+x,15);
        if(d<0)
        {
            y=y;
            d=d+4*x+6;
        }
        else
        {
            d=d+4*(x-y)+10;
            y=y-1;
        }
        x=x+1;
        }while(x<=y);
}


int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    draw a;

    a.ddaline(200,150,250,250);
    a.ddaline(100,300,300,300);
    a.Bresanham_Algo(200,200,200);

    a.Bresanham_Algo(100, 150 ,50);
    a.Bresanham_Algo(300, 150, 50);
    getch();

    return 0;
}
