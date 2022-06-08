#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,gd=DETECT,gm;
    int x1,y1,x2,y2,xmin,xmax,ymin,ymax,xx1,xx2,yy1,yy2,dx,dy;
    float t1,t2,p[4],q[4],temp;

    cout<<"Enter the value of X1, Y1 And X2, Y2 : ";
    x1=80,y1=80,x2=280,y2=280 ;
    cout<<"Enter the value of Xmin, Ymin And Xmax, Ymax : ";
    xmin==100,ymin=100,xmax=300,ymax=300;

    initgraph(&gd,&gm,"");

    rectangle(xmin + 200,ymin,xmax + 200,ymax );
    line(x1 + 200,y1,x2 + 200,y2 );
    circle(100,100,50);

    line(300 ,300 ,500,500);

    rectangle(xmin,ymin,xmax,ymax);


    getch();
    closegraph();
}


