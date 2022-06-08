
#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gdriver,gmod;
    gdriver = DETECT;
    initgraph(&gdriver,&gmod," ");
    setbkcolor(WHITE);
    cleardevice();

    int x1,x2,y1,y2;
    cout<<"Enter the values of X1,Y1: ";
    cin>>x1>>y1;
    cout<<"Enter the values of X2,Y2: ";
    cin>>x2>>y2;

    if(x1>x2)
    {
        swap(x1,x2);
        swap(y1,y2);
    }
    int x=x1,y=y1;
    int dx=x2-x1,dy=y2-y1,dt=2*(dy-dx), dS=2*dy, d=2*dy-dx;
    putpixel(x,y,BLACK);

    while(x<=x2)
    {
        x++;
        if(d<0)
        {
            d+=dS;
        }
        else
        {
            y++;
            d+=dt;
        }
        putpixel(x,y,BLACK);
    }

    getch();
    closegraph();
    return 0;
}
