#include <iostream>
#include <time.h>
using namespace std;

time_t sec1, sec2;

void area()

{
    game_bg();
    road_c();
    car();
}

void area1()

{
    game_bg();
    road_c1();
    car();
}

void game()
{
    x = 50;
    y = 38;

    r_x = 50;
    r_y = 16;

    while (z != 126)
    {
        sec1 = time(NULL)+5;
        area();
        while (time(NULL) < sec1)
        {
        steering();
            while (time(NULL) >= sec1)
            {
                9;
            }
        }
        
        area1();
        sec2 = time(NULL)+1;
        while (time(NULL) < sec2)
        {
            steering();
            break;
        }
    }
}
