#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

int main()
{
    //initialize the graphics mode
    int gm, gd = DETECT, i;
    int x1, y1, x2, y2, steps, k;
    float x_incr, y_incr,  x, y, dx, dy;

    char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file
    initgraph(&gd, &gm, data);
   
    printf("Enter first end point");
    scanf("%d %d", &x1, &y1);

    printf("Enter second end point");
    scanf("%d %d", &x2, &y2);

    dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);

    x_incr = dx/steps;
    y_incr = dy/steps;
    printf("%f %f", x_incr, y_incr);

    x = x1;
    y = y1;

    for (k=1; k<=steps; k++)
    {
        delay(100);
        x += x_incr;
        y += y_incr;
        putpixel(x,y,WHITE);
    }

    outtextxy(200,20,"DDA"); //for printing text at desired screen location.
    outtextxy(100,20,"Pasang Tasi Sherpa");
    // outtextxy(x1+5,y1-5,"(x1,y1)");
    // outtextxy(x2+5,y2+5,"(x2,y2)");
    //draw

    //getch and close
    getch();
    closegraph();

    return 0;
}