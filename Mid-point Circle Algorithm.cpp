#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
using namespace std;
void drawCircle(int x1,int y1,int x,int y)
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
    cout<<"Enter the center points X Y: ";
    cin>>x1>>y1;
    cout<<"Enter the radius: ";
    cin>>r;

    x1+=r;
    y1+=r;
    int x=0,y=r,p=1-r;
    drawCircle(x1,y1,x,y);

    while(x<=y)
    {
        drawCircle(x1,y1,x,y);
        if(p<0)
        {
            p+=(2*x+3);
        }
        else
        {
            p+=(2*(x-y)+ 5);
            y--;
        }
        x++;
    }
    getch();
    closegraph();
    return 0;
}
