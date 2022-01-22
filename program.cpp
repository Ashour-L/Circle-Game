#include "splashkit.h"
#define RADIUS  50

int main()
{
   double x;
   double y; 
   color circle_color = COLOR_GREEN;

   open_window("circle",800,600);
   
  x = screen_width() / 2;
  y = screen_height() / 2;
 

   
    
   while (not quit_requested(), not key_typed(ESCAPE_KEY)) 
   {
      process_events();


      if (key_typed(C_KEY))
      {
          circle_color = random_color();

      }

      if (key_down(RIGHT_KEY))
        {
          x = x + 3;
        }

      if ( key_down(LEFT_KEY) )
      {
        x = x - 3;
      
      }
      

      
      if (key_down(UP_KEY))
      {
        y = y - 3;
      }

      if (key_down(DOWN_KEY))
       {
          y = y + 3;
       }

      if (x + RADIUS > screen_width())
      {
        x = screen_width() - RADIUS;
      }


        if (x - RADIUS < 0 )
      {
        x =  RADIUS;
      }

     if (y + RADIUS > screen_height())
       {
         y = screen_height() - RADIUS;
      }

     if (y - RADIUS < 0 )
      {
        y = RADIUS;
      }

      clear_screen(COLOR_WHITE);
      fill_circle(circle_color, x,y,RADIUS);
      refresh_screen(60);
     
    }
   
     
    
    



    return 0;
}


