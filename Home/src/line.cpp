#include <stdio.h> // Standard Input/Output
#include <graphics.h> // MUST be included for BGI functions
#include <conio.h> // For getch() to pause the screen
int main() {
// 1. Declare Graphics Variables
int gd = DETECT, gm;
// gd: Graphics Driver (DETECT asks system to auto-detect best driver)
// gm: Graphics Mode
// 2. Initialize the Graphics Mode
// The third argument is the path to the BGI files (*.BGI).
// Use "" if BGI files are in the current working directory,
// or the full path (e.g., "C:\\TurboC3\\BGI").
char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file
 initgraph(&gd, &gm, data);
// 3. Write Drawing Code Here
// Example: Draw a line from (100, 100) to (200, 200)
setcolor(WHITE); // Set color for the line
line(100, 100, 200, 200);
// 4. Pause and Close
getch(); // Waits for a key press
closegraph(); // Closes the graphics mode
return 0;

}