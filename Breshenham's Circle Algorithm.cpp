#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
using namespace std;
void drawline(int x1,int y1,int x,int y)
{
    putpixel(x1+x,y1+y,BLACK);
    putpixel(x1-x,y1+y,BLACK);
    putpixel(x1+x,y1-y,BLACK);
    putpixel(x1-x,y1-y,BLACK);
    putpixel(x1+y,y1+x,BLACK);
    putpixel(x1-y,y1+x,BLACK);
    putpixel(x1+y,y1-x,BLACK);
    putpixel(x1-y,y1-x,BLACK);
}
int main()
{
    int gdriver,gmod;
    gdriver = DETECT;
    initgraph(&gdriver,&gmod," ");
    setbkcolor(WHITE);
    cleardevice();
    int x1,y1,r;
    cout<<"Enter the center points X,Y: ";
    cin>>x1>>y1;
    cout<<"Enter the radius: ";
    cin>>r;

    x1+=r;
    y1+=r;
    int x=0,y=r,d=3-2*r;
    drawline(x1,y1,x,y);

    while(x<=y)
    {
        drawline(x1,y1,x,y);
        if(d<0)
        {
            d+=(4*x+6);
        }
        else
        {
            d+=(4*(x-y)+10);
            y--;
        }
        x++;
    }
    getch();
    closegraph();
    return 0;
}

