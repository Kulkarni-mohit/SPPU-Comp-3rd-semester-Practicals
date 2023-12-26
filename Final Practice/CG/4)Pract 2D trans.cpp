#include<iostream>
#include<graphics.h>
#include<math.h>

using namespace std;

class Transfom
{
public:

    void translation()
    {
        int tx, ty;
        line(200,150,100,300);
        line(100,300,300,300);
        line(300,300,200,150);

        cin>>tx>>ty;

        line(200+tx,150+ty,100+tx,300+ty);
        line(100+tx,300+ty,300+tx,300+ty);
        line(300+tx,300+ty,200+tx,150+ty);
    }

    void scaling()
    {
        float sx, sy;
        line(200,150,100,300);
        line(100,300,300,300);
        line(300,300,200,150);

        cin>>sx>>sy;

        line(200*sx,150*sy,100*sx,300*sy);
        line(100*sx,300*sy,300*sx,300*sy);
        line(300*sx,300*sy,200*sx,150*sy);
    }

    void rotation()
    {
        long x1=200,y1=150,x2=100,y2=300,x3=300,y3=300;

        line(200,150,100,300);
        line(100,300,300,300);
        line(300,300,200,150);

        float a;
        cout<<"Angle of rotation:";
        cin>>a;
        a=(a*3.14)/180;

        x1 = 200*cos(a)-150*sin(a);     // x' = xcosa - ysina
        y1 = 200*sin(a)+150*cos(a);     // y' = ycosa + xsina
        x2 = 100*cos(a)-300*sin(a);
        y2 = 100*sin(a)+300*cos(a);
        x3 = 300*cos(a)-300*sin(a);
        y3 = 300*sin(a)+300*cos(a);

        line(x1,y1,x2,y2);
        line(x2,y2,x3,y3);
        line(x3,y3,x1,y1);
    }
};

int main()
{
    int gd = DETECT,gm;
    initgraph(&gd,&gm," ");

    Transfom T;
    T.translation();

    T.scaling();
    T.rotation();

    getch();
    return 0;
}
