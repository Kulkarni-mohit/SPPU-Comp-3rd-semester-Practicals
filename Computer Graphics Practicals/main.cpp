#include <iostream>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
using namespace std;

void DDAAlgorithm(int a1, int b1, int a2, int b2)
{
int dx = a2 - a1;
int dy = b2 - b1;
int steps = dx > dy ? dx : dy;
float aInc = dx / (float)steps;
float bInc = dy / (float)steps;
float a = a1;
float b = b1;
for (int i = 0; i <= steps; i++)
{
putpixel(a, b, WHITE); a += aInc;
b += bInc;
}
}

int main(){
    int gd = DETECT , gm,n,i,j,k,dy,dx;
    int x,y,temp;
    int p[20][2], xi[20];
    float slope[20];

    cout<<"Enter the vertices or edges for polygon"<<endl;
    cin>>n;
    cout<<"Enter the coordinates of polygon"<<endl;
    for (i = 0;i<n;i++){
        cout<<"x"<<i<<"y"<<i<<":";
        cin>>p[i][0]>>p[i][0];

        p[i][0]=p[0][0];
        p[i][1]=p[0][1];

        initgraph(&gd, &gm, "");
        for(i=0;i<n;i++){
            DDAAlgorithm(p[i][0]), p[i][i], p[i+1][0], p[i+1][1]);
            getch();
        }
        for(i=0; i<n;i++){
            dy = p[i+1][1] - p[i][1];
            dx = p[i+1][0] - p[i][0];

            if (dy==0)
                slope[i]=1;

            if(dx == 0)
                slope[i]=0;
            if((dy!= 0)&& (dx != 0)){
                slope[i]= (float) dx/dy;
            }
        }
        for(y =0;y<480;y++){
            k=0;
            for(i=0;i<n;i++){
                if(((p[i][1]<=y)&&(p[i+1][1] >y))|| ((p[i][1]>y)&&(p[i+1][1]<=y))){
                    xi[k]= (int)(p[i][0]+slope[i]*(y-p[i][1]));
                    k++:
                }
            }
            for(j=0;j<k-1;j++)
            for(i=0;i<k-1;i++){
                if (xi[i] > xi[i+1]){
                    temp = xi[j];
                    xi[i]= xi[i+1];
                    xi[i+1] = temp;
                }
            }
            setColor(2):
                for(i=0;i<k;i++){
                    line(xi[i],y,xi[i+1],y);
                    delay(20);
                }
        }
        getch();
        closegraph();
        return 0;
    }
}
