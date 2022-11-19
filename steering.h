#include <iostream>
#include <stdio.h>

using namespace std;

int x,y;
char z;

void steering()
{
    system("stty raw");
    
    z = getchar();
    
    system("stty cooked");
    
    if(z == 126)
    {
        exit(0);
    }

    if (x >= 32)
    {
        if (z == 'a' or z == 'A')
        {
            x -= 4;
        }
    }
    if (x <= 68)
    {
        if (z == 'd' or z == 'D')
        {
            x += 4;
        }
    }
}

