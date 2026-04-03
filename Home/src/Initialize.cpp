#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main()
{
int gd = DETECT, gm;
initgraph(&gd, &gm,""); // BGI files in same folder

outtext("Graphics Mode Initialized Successfully");

getch();
closegraph();
return 0;
}