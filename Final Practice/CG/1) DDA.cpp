#include<iostream>
#include<graphics.h>

void dda(int x1,int y1,int x2,int y2)
{
    float dx,dy,x,y;

    dx = (x2-x1);
    dy = (y2-y1);

    float step;

    if (abs(dx)>=abs(dy))
        step = abs(dx);
    else
        step = abs(dy);

    dx = dx/step;
    dy = dy/step;

    x=x1;
    y=y1;

    int i=1;
    while(i<=step)
    {
        putpixel(x,y,15);
        x = x + dx;
        y = y + dy;
        i++;
    }
}

void bresenham(int xc, int yc, int r)
{
    int x = 0, y = r,d;

    putpixel(x+xc,y+yc,15);
    d = 3-2*r;

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

        if (d<0)
        {
            //y=y;
            d=d+4*x+6;
        }

        else
        {
            y--;
            d=d+4*(x-y)+10;
        }
        x++;
    }while(x<=y);

}

int main()
{
    int x1,y1,x2,y2;
    int gd = DETECT,gm;
    initgraph(&gd,&gm," ");

    dda(250,250,250,280);
    dda(200,300,300,300);
    bresenham(300,220,20);
    bresenham(200,220,20);
    bresenham(250,250,100);

    getch();
}
