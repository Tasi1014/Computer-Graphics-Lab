#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    char data[] = "C:\\MinGW\\lib\\libbgi.a";
    
    initgraph(&gd, &gm, data);

    // 1. Draw two lines of different colors
    setcolor(RED);
    line(50, 50, 200, 50);

    setcolor(BLUE);
    line(50, 80, 200, 80);

    // 2. Draw two circles with different colors
    setcolor(GREEN);
    circle(100, 150, 40);

    setcolor(YELLOW);
    circle(250, 150, 40);

    // 3. Draw two pixels with different colors
    putpixel(300, 50, WHITE);
    putpixel(320, 70, YELLOW);

    // 4. Display your name
    setcolor(CYAN);
    outtextxy(100, 250, "Pasang Tasi Sherpa");

    // Hold screen
    getch();

    // Close graphics
    closegraph();

    return 0;
}