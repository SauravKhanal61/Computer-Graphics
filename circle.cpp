#include <graphics.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    circle(200,200,150);   // Draw circle

    getch();
    closegraph();
    return 0;
}
