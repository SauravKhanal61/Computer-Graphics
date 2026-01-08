#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main()
{
    //BLE line drawing algorithm m>1
    int gd=DETECT,gm;
    int x1, y1, x2, y2, dx, dy;
    cout<<"Enter the value of x1, y1, x2, y2: ";
    cin>>x1>>y1>>x2>>y2;
    initgraph(&gd, &gm, (char*)"");
    dx=x2-x1;
    dy=y2-y1;
    int x=x1;
    int y=y1;
    int Pk = 2*dx - dy;
    putpixel(x,y,WHITE);
    for(int i=0; i<=dy; i++){

        if(Pk<0){
            x=x+1;
            y=y;
            Pk=Pk+2*dx;
        }else{
            x=x+1;
            y=y+1;
            Pk=Pk+2*dx-2*dy;
        }
        putpixel(x,y,WHITE);
    }
    getch();
    closegraph();
    return 0;
}