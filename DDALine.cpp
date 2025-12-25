#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    int k;
    int gd=DETECT,gm;
    float steps,x,y,x1,y1,x2,y2,dy,dx,delx,dely;
    cout<<"Enter the value of x1, y1, x2, y2: ";
    cin>>x1>>y1>>x2>>y2;
    dy=y2-y1;
    dx=x2-x1;
    initgraph(&gd, &gm, (char*)"");
    if(abs(dy)<abs(dx)){
        steps=abs(dx);
    }else{
        steps=abs(dy);
    }
    delx=dx/steps;
    dely=dy/steps;
    x=x1;
    y=y1;
    putpixel(round(x),round(y),WHITE);
    for(k=0;k<steps;k++){
        x=x+delx;
        y=y+dely;
        putpixel(round(x),round(y),WHITE);
        delay(30);
    }
    getch();
    closegraph();
}