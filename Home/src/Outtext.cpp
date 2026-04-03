#include <graphics.h>
#include <conio.h>
int main()
{
int gd = DETECT, gm;

char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file
initgraph(&gd, &gm, data);

setcolor(YELLOW);
outtextxy(100, 100, "This is computer graphics lab");

getch();
closegraph();
return 0;
}