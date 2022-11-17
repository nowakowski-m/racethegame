#include <iostream>

using namespace std;

int x,y;

string z;

void steering()
{
    cin >> z;

    if (x >= 32)
    {
        if (z == "a" or z == "A")
        {
            x -= 2;
        }
    }
    if (x <= 68)
    {
        if (z == "d" or z == "D")
        {
            x += 2;
        }
    }
}
