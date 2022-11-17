#include <iostream>
#include "background.h"
#include "steering.h"
#include "car.h"

using namespace std;

void game()
{
    x = 50;
    y = 38;

    r_x = 50;
    r_y = 16;

    while (true)
    {
        game_bg();
        road_c();
        car();
        steering();
    }
}

int main()
{
    game();
    return 0;
}
