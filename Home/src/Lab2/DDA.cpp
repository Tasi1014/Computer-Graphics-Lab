#include <stdio.h>
#include <graphics.h>
#include <math.h>
int main()
{
    int gd = DETECT, gm;
        // gd=graphics driver (detects best graphics driver and assigns it as default, gm=graphics mode)
    int x1,y1,x2,y2,steps,k;
    float xincr, yincr, x, y, dx, dy;
    printf("Enter x1,y1: ");
    scanf("%d %d", &x1, &y1);
    printf("enter x2,y2: ");
    scanf("%d %d", &x2, &y2);
    char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file
    initgraph(&gd, &gm, data); // initializes the graph
    dx = x2 - x1;
    dy = y2 - y1;
    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);
    xincr = dx / steps;
    yincr = dy / steps;
    x = x1;
    y = y1;
    printf(xincr);
    for (k = 1; k <= steps; k++)
    {
        delay(100); // for seeing the line drawing process slowly.
        x += xincr;
        y += yincr;
        putpixel(int(x) , int(y), WHITE);
    }
    outtextxy(200, 20, "DDA"); // for printing text at desired screen location.
    outtextxy(x1 + 5, y1 - 5, "(x1,y1)");
    outtextxy(x2 + 5, y2 + 5, "(x2,y2)");
    getch();
    closegraph(); // closes the graph and comes back to previous graphic mode.
    return 0;
}