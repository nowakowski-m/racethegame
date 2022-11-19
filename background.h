#include <iostream>
#include <stdio.h>
#include <unistd.h>

using namespace std;

int r_x, r_y, bg_h, w_bot, w_top;

void game_bg()
{
    bg_h = 1;
    w_top = 1;
    w_bot = 1;
    system("clear");
    while (bg_h <= 50)
    {
        while (w_top <= 38)
        {
            cout << "\x1b[44m \x1b[0m";
            w_top++;
        }
        bg_h++;
        w_top = 1;
    }

    bg_h = 1;

    while (bg_h <= 50)
    {
        while (w_bot <= 40)
        {
            cout << "\x1b[42m \x1b[0m";
            w_bot++;
        }
        bg_h++;
        w_bot = 1;
    };
}

void road_c()
{
    int l_x, l_y, color, r_ypos, r_xpos;
    string space, rspace;
    r_ypos = 0;
    r_xpos = 18;
    space = "                                    ";
    rspace = "    ";
    color = 100;

    for (int r_ypos; r_ypos<=20; r_ypos+=4)
    {
        if (r_ypos==0)
        {
            printf( "\033[%d;%dH", ( (r_y) + (r_ypos) ), ( (r_x) - (r_xpos) ) );   cout <<  "\x1b[" << color << "m" << "\x1b[0m";
        }
        else
        {
            printf( "\033[%d;%dH", ( ( (r_y) + 0 ) + (r_ypos) ), ( (r_x) - (r_xpos) ) );   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << space << "\x1b[0m" << "\x1b[40m \x1b[0m";
            printf( "\033[%d;%dH", ( ( (r_y) + 1 ) + (r_ypos) ), ( (r_x) - (r_xpos) ) );   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << space << "\x1b[0m" << "\x1b[40m \x1b[0m";
            printf( "\033[%d;%dH", ( ( (r_y) + 2 ) + (r_ypos) ), ( (r_x) - (r_xpos) ) );   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << space << "\x1b[0m" << "\x1b[40m \x1b[0m";
            printf( "\033[%d;%dH", ( ( (r_y) + 3 ) + (r_ypos) ), ( (r_x) - (r_xpos) ) );   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << space << "\x1b[0m" << "\x1b[40m \x1b[0m";
        } 
        space += rspace;
        r_xpos+=2;
    }
    cout << endl;
}

void road_c1()
{
    int l_x, l_y, color, r_ypos, r_xpos;
    string space, rspace;
    r_ypos = 0;
    r_xpos = 18;
    space = "                                    ";
    rspace = "    ";
    color = 43;

    for (int r_ypos; r_ypos<=20; r_ypos+=4)
    {
        if (r_ypos==0)
        {
            printf( "\033[%d;%dH", ( (r_y) + (r_ypos) ), ( (r_x) - (r_xpos) ) );   cout <<  "\x1b[" << color << "m" << "\x1b[0m";
        }
        else
        {
            printf( "\033[%d;%dH", ( ( (r_y) + 0 ) + (r_ypos) ), ( (r_x) - (r_xpos) ) );   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << space << "\x1b[0m" << "\x1b[40m \x1b[0m";
            printf( "\033[%d;%dH", ( ( (r_y) + 1 ) + (r_ypos) ), ( (r_x) - (r_xpos) ) );   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << space << "\x1b[0m" << "\x1b[40m \x1b[0m";
            printf( "\033[%d;%dH", ( ( (r_y) + 2 ) + (r_ypos) ), ( (r_x) - (r_xpos) ) );   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << space << "\x1b[0m" << "\x1b[40m \x1b[0m";
            printf( "\033[%d;%dH", ( ( (r_y) + 3 ) + (r_ypos) ), ( (r_x) - (r_xpos) ) );   cout << "\x1b[40m \x1b[0m" << "\x1b[" << color << "m" << space << "\x1b[0m" << "\x1b[40m \x1b[0m";
        } 
        space += rspace;
        r_xpos+=2;
    }
    cout << endl;
}
