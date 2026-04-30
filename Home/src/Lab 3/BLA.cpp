#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <stdbool.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2, x, y, p, sx, sy;

    printf("Enter x1,y1: ");
    scanf("%d%d", &x1, &y1);

    printf("enter x2,y2: ");
    scanf("%d%d", &x2, &y2);

    char data[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd, &gm, data);

    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);

    x = x1;
    y = y1;

    sx = (x2 >= x1) ? 1 : -1;
    sy = (y2 >= y1) ? 1 : -1;

    bool isSteep = dy > dx;

    if (isSteep)
    {
        int temp = dx;
        dx = dy;
        dy = temp;
    }

    p = 2 * dy - dx;

    for (int i = 0; i <= dx; i++)
    {
        putpixel(x, y, WHITE);
        delay(10);

        if (p >= 0)
        {
            if (isSteep)
                x += sx;
            else
                y += sy;

            p -= 2 * dx;
        }

        if (isSteep)
            y += sy;
        else
            x += sx;

        p += 2 * dy;
    }

    outtextxy(200, 20, "BLA");
    outtextxy(x1 + 5, y1 - 5, "(x1,y1)");
    outtextxy(x2 + 5, y2 + 5, "(x2,y2)");

    getch();
    closegraph();

    return 0;
}