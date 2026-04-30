#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>

void drawEllipse(int xc, int yc, int rx, int ry) {
    float x = 0, y = ry;
    float p1, p2;

    // Region 1
    p1 = (ry * ry) - (rx * rx * ry) + (0.25 * rx * rx);

    while ((2 * ry * ry * x) < (2 * rx * rx * y)) {
        // Plot symmetric points
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);

        if (p1 < 0) {
            x++;
            p1 += (2 * ry * ry * x) + (ry * ry);
        } else {
            x++;
            y--;
            p1 += (2 * ry * ry * x) - (2 * rx * rx * y) + (ry * ry);
        }
    }

    // Region 2
    p2 = (ry * ry) * (x + 0.5) * (x + 0.5) +
         (rx * rx) * (y - 1) * (y - 1) -
         (rx * rx * ry * ry);

    while (y >= 0) {
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);

        if (p2 > 0) {
            y--;
            p2 += (rx * rx) - (2 * rx * rx * y);
        } else {
            y--;
            x++;
            p2 += (2 * ry * ry * x) - (2 * rx * rx * y) + (rx * rx);
        }
    }
}

int main() {
    int gd = DETECT, gm;
    int xc, yc, rx, ry;

    printf("Enter center (xc yc): ");
    scanf("%d %d", &xc, &yc);

    printf("Enter radii (rx ry): ");
    scanf("%d %d", &rx, &ry);

    // Correct path variable
    char path[] = "C:\\MinGW\\lib\\libbgi.a";

    initgraph(&gd, &gm, path);

    drawEllipse(xc, yc, rx, ry);

    getch();
    closegraph();

    return 0;
}