#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>+
using namespace std;

void DDA1(int x1,int y1,int x2,int y2)
{
    if(y1>y2)
    {
        swap(y1,y2);
        swap(x1,x2);
    }
    int x,y=y1;
    double xf = x1,m=(x2-x1)/(y2-y1);
    while(y<=y2)
    {
        x = (xf+0.5);
        putpixel(x,y,BLACK);
        xf=xf+m;
        y++;
    }
}
void DDA2(int x1,int y1,int x2,int y2)
{
    if(x1>x2)
    {
        swap(x1,x2);
        swap(y1,y2);
    }
    int x=x1,y;
    double yf = y1,m=(y2-y1)/(x2-x1);
    while(x<=x2)
    {
        y = (yf+0.5);
        putpixel(x,y,BLACK);



        yf=yf+m;
        x++;
    }
}
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
    if(abs(x2-x1) < abs(y2-y1))
    {
        DDA1(x1,y1,x2,y2);
    }
    else
    {
        DDA2(x1,y1,x2,y2);
    }
    line(100,100,200,200);



    getch();
    closegraph();
    return 0;
}
