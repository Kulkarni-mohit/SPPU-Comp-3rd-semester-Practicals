#include <iostream>
#include <graphics.h>

using namespace std;

class _2DTransformation
{
public:
    int x1,y1,x2,y2,tx,ty;
/*
    _2DTransformation(){}
    _2DTransformation(int x1,int y1,int x2,int y2,int tx,int ty)
    {
        x1 = x1;
        y1 = y1;
        x2 = x2;
        y2 = y2;
        tx = 45;
        ty = 45;
    }
*/
    void translation(int x1,int y1,int x2,int y2,int tx,int ty)
    {
        int gd = DETECT,gm,s;
        initgraph(&gd,&gm,"");

        setcolor(5);
        rectangle(x1,y1,x2,y2);

        setcolor(10);
        rectangle(x1+tx, y1+tx, x2+ty, y2+tx);

        getch();
    }

    void scale(int x1,int y1,int x2,int y2,int tx,int ty)
    {
        int gd = DETECT,gm,s;
        initgraph(&gd,&gm," ");

        setcolor(5);
        rectangle(x1,y1,x2,y2);

        setcolor(10);
        rectangle(x1*tx, y1*tx, x2*ty, y2*tx);

        getch();
    }
};

int main()
{
    _2DTransformation t;

    t.translation(100,100,250,250,100,100);
    //t.scale(50,50,200,200,2,2);


    return 0;
}
