#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    int gd=DETECT, gm;
    int xc, yc, r;
    cout << "Enter the center coordinates (xc, yc) and radius r of the circle: ";
    cin >> xc >> yc >> r;
    initgraph(&gd, &gm, (char*)"");
    int x = 0;
    int y = r;
    int Pk = 1 - r;
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc - y, yc + x, WHITE);
    putpixel(xc + y, yc - x, WHITE);
    putpixel(xc - y, yc - x, WHITE);
    while(x<y)
    {
        x++;
        if(Pk<0)
        {
            Pk = Pk + 2*x + 1;
        }
        else
        {
            y--;
            Pk = Pk +2*x+1-2*y;
        }
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - y, yc + x, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc - y, yc - x, WHITE);
    }
    delay(5000);
    getch();
    closegraph();
    return 0;

}