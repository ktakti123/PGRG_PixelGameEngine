#include <stdio.h>
#include <stdlib.h>
#include "pgrg.h"


// Main function
int main()
{
  
  start(); // Initialize your graphical environment
  loadobj();
  while (run)
  {                             // Main application loop
    Events();                   // Handle events (like user inputs)
    fill_screen(255, 255, 255); // Clear screen to white
    set_point(10,20,255,255,255);// Draw point at x1,y1,x2,y2
    set_point(10,20,color_black);
    set_point(100,20,color_red);
    set_point(10,20,color_blue);
    set_point(10,20,color_green);
    set_point(10,20,color_white);
    draw_line(10 , 30, 50, 100 ,255,255, 255); // Draw line(x1,y1,x2,y2,r,g,b)
    draw_line(20 , 200, 10, 10 ,color_black); 
    Render(); // Render everything on screen
  }
  
  return 0;
}
