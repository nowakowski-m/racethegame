#include <iostream>
#include <time.h>
#include <conio.h>
#include "steering.h"
#include "background.h"

using namespace std;

int road_type;

void pobor()
{

// mozna jeszcze pobawic sie z czasem zeby bylo szybciej, zauwazenia:
//mnozac timenull * 2 albo dodajac dwa razy go do siebie, on i tak zwieksza sie o 2,
//wiec dodajac do niego 1 nie zauwaza roznicy, wiec nie zmienimy jego skali
//znajdz timenull dla milisekund w necie

sec1 = ( time(NULL) );

while ( sec1 >= time(NULL) )
  {
    while (kbhit())
    {
      input_take();
      game_bg();
      if ( road_type == 0)
      {
        road_c();
      }
      if ( road_type == 1)
      {
        road_c1();
      }
      car();
    }

  }

if ( sec1 < (time(NULL)))
{
    if ( road_type == 0)
      {
        road_c1();
        car();
      }
      if ( road_type == 1)
      {
        road_c();
        car();
      }
}
}

void game()
{
    x = 50;
    y = 38;
    
    r_x = 32;
    r_y = 20;

    game_bg();
    road_c();
    car();

    while (z!=126)
    {
    road_type = 0;
    pobor();
    road_type = 1;
    pobor();
    }
}