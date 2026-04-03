#include<stdio.h>
#include <graphics.h>
#include <conio.h>

int main()
{
int gd = DETECT, gm;

char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file
initgraph(&gd, &gm, data);

// Draw pixel in RED
putpixel(100, 100, 4);

// Draw a BLUE line
setcolor(BLUE);
line(50, 50, 200, 50);

// Draw a GREEN rectangle
setcolor(GREEN);
rectangle(50, 100, 200, 200);

// Draw a YELLOW circle
setcolor(YELLOW);
circle(300, 150, 50);

getch();
closegraph();
return 0;
}