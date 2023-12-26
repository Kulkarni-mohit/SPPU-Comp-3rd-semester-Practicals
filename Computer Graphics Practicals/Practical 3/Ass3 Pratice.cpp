#include <iostream>
#include <graphics.h>

using namespace std;

struct Point
{
    int x;
    int y;
    int code[4];
};

void drawwindow()
{
    setcolor(11);
    line(100,100,450,100);
    line(100,100,100,350);
    line(100,350,450,350);
    line(450,350,450,100);
    delay(2000);
}

void drawline (Point p1,Point p2,int cl)
{
    setcolor(cl);

    line(p1.x,p1.y,p2.x,p2.y);
    delay(2000);
}

Point setcode(Point p)
{
    Point temp;

    if (p.y<100)
        p.code[0]=1;
    else
        p.code[0]=0;

    if (p.y>350)
        p.code[1] = 1;
    else
        p.code[1] = 0;

    if (p.x>450)
        p.code[2] = 1;
    else
        p.code[2] = 0;

    if (p.x<100)
        p.code[3] = 1;
    else
        p.code[3] = 0;

    temp.x = p.x;
    temp.y = p.y;

    return temp;
}

int visibility(Point p1, Point p2)
{
    int flag = 0;

    for(int i = 0; i<4; i++)
    {
        if((p1.code[i]!=0)||(p2.code[i]!=0))
            flag = 2;
    }

    for(int i=0;i<4;i++)
    {
        if((p1.code[i]==p2.code[i]) &&(p1.code[i]=='1'))
            flag=1;
    }

    if(flag==0)
        return(0);
    if(flag==1)
        return(1);
    if(flag==2)
        return(2);
}

Point resetendpt (Point p1,Point p2)
{
    Point temp;
    int x,y,i;
    float m,k;

    if( p1.code[3]=='1') /* Cutting LEFT Edge */
        x=150;
    if(p1.code[2]=='1') /* Cutting RIGHT Edge */
        x=450;
    if((p1.code[3]=='1')||(p1.code[2]=='1'))
    {
        m=(float) (p2.y-p1.y)/(p2.x-p1.x);
        k=(p1.y+(m*(x-p1.x)));
        temp.y=k;
        temp.x=x;

        if(temp.y<=350&&temp.y>=100)
            return(temp);

    }

    if(p1.code[0]=='1') /* Cutting TOP Edge */
        y=100;

    if(p1.code [1]=='1') /* Cutting BOTTOM Edge */
        y=350;

    if((p1.code[0]=='1')||(p1.code[1]=='1'))
    {
        m=(float)(p2.y-p1.y)/(p2.x-p1.x);
        k=(float)p1.x+(float)(y-p1.y)/m;
        temp.x=k;
        temp.y=y;
        if(temp.x<=450&&temp.x>=150)
            return(temp);
    }
    else
        return(p1);
}

void go(Point p1, Point p2)
{
    int choice;
    p1 = setcode(p1);
    p2 = setcode(p2);

    choice = visibility(p1,p2);
    cout<<choice;
    switch(choice)
    {
    case(0):
        cleardevice();
        drawwindow();
        drawline(p1,p2,15);
        break;

    case(1):
        cleardevice();
        drawwindow();
        break;

    case(2):
        cleardevice();
        drawwindow();
        p1=resetendpt (p1,p2);
        p2=resetendpt (p2,p1);
        go(p1,p2);
        break;
    }
    delay(2000);
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");

    Point p1;
    Point p2;

    cout<<"\n\t\tENTER END-POINT 1 (x,y): ";
    cin>>p1.x>>p1.y;
    cout<<"\n\t\tENTER END-POINT 2 (x,y): ";
    cin>>p2.x>>p2.y;

    initgraph(&gd,&gm,"");
    drawwindow();
    drawline(p1,p2,15);
    go(p1,p2);
    return(0);
}
