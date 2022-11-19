#include <iostream>
#include <time.h>
using namespace std;

time_t sec;

void game()
{
    x = 50;
    y = 38;

    r_x = 50;
    r_y = 16;

    game_bg();
    road_c();
    car();
    system("stty cooked");
    steering();

    while (z != 126)
    {
        sec = time(NULL);
        game_bg();
        road_c();
        car();
        while ( sec != time(NULL) )
        {
            system("stty cooked");
            steering();
        }

        sec = time(NULL);
        game_bg();
        road_c1();
        car();
        while ( sec != time(NULL) )
        {
            system("stty cooked");
            steering();
        }
    }
}
