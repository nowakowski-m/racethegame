#include <iostream>
#include <stdio.h>
#include "game.h"

using namespace std;

void start_menu();

int menu_pos, menu_h;
char m_updown, m_updown1, m_updown2;

void loading()
{
    int loading_y;
	loading_y = 1;

    printf( "\033[%d;%dH", ( 20 ), ( 43 ) ); 
	cout << "Loading... ";
	for (int loading_x=1; loading_x<=5; loading_x++)
	{	
        printf( "\033[%d;%dH", ( 20 ), ( 53+loading_x ) ); 
		cout << "\x1b[41mഠ\x1b[0m";
		cout.flush();
  		usleep(500000);
	}
}


void start_bg()
{
    menu_h = 1;
    system("clear");
    while (menu_h <= 10)
    {
        for (int white = 1;  white <= 50; white+=1)
        {
            cout << "\x1b[47m  \x1b[0m";
            cout << "\x1b[100m  \x1b[0m";
        }
        cout << endl;
        for (int black = 1; black <= 50; black ++)
        {
            cout << "\x1b[100m  \x1b[0m";
            cout << "\x1b[47m  \x1b[0m";
        }
        cout << endl;
        menu_h++;
    }
}

void rules()
{
    m_updown = 0;
    system("clear");
    start_bg();
    printf( "\033[%d;%dH", ( 10 ), ( 40 ) );   cout << "\x1b[1;31;40m                          \x1b[0m";
    printf( "\033[%d;%dH", ( 11 ), ( 40 ) );   cout << "\x1b[1;31;40m          Zasady          \x1b[0m";
    printf( "\033[%d;%dH", ( 12 ), ( 40 ) );   cout << "\x1b[1;31;40m                          \x1b[0m";
    printf( "\033[%d;%dH", ( 1000 ), ( 0 ) );
    system("stty raw");
    m_updown1 = getchar();
    system("stty cooked");

    if (m_updown1 == 13)
    {
        start_menu();
    }
    
    else if (m_updown1 == 126)
    {
        exit(0);
    }
    else
    {
        rules();
    }
}

void credits()
{
    m_updown = 0;
    system("clear");
    start_bg();
    printf( "\033[%d;%dH", ( 10 ), ( 40 ) );   cout << "\x1b[1;31;40m                          \x1b[0m";
    printf( "\033[%d;%dH", ( 11 ), ( 40 ) );   cout << "\x1b[1;31;40m          Tworca          \x1b[0m";
    printf( "\033[%d;%dH", ( 12 ), ( 40 ) );   cout << "\x1b[1;31;40m                          \x1b[0m";
    printf( "\033[%d;%dH", ( 14 ), ( 40 ) );   cout << "\x1b[1;31;40m                          \x1b[0m";
    printf( "\033[%d;%dH", ( 15 ), ( 40 ) );   cout << "\x1b[1;31;40m          Michal          \x1b[0m";
    printf( "\033[%d;%dH", ( 16 ), ( 40 ) );   cout << "\x1b[1;31;40m        Nowakowski        \x1b[0m";
    printf( "\033[%d;%dH", ( 17 ), ( 40 ) );   cout << "\x1b[1;31;40m                          \x1b[0m";
    printf( "\033[%d;%dH", ( 1000 ), ( 0 ) );
    system("stty raw");
    m_updown2 = getchar();
    system("stty cooked");

    if (m_updown2 == 13)
    {
        start_menu();
    }
    
    else if (m_updown2 == 126)
    {
        exit(0);
    }
    else
    {
        credits();
    }
}

void menu_launch()
{
    system("clear");
    start_bg();
    printf( "\033[%d;%dH", ( 20 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
    printf( "\033[%d;%dH", ( 21 ), ( 47 ) );   cout << "\x1b[1;31;40m \x1b[0m" << "\x1b[1;30;101m Graj!\x1b[0m" << "\x1b[1;31;40m \x1b[0m";
    printf( "\033[%d;%dH", ( 22 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
    printf( "\033[%d;%dH", ( 23 ), ( 47 ) );   cout << "\x1b[1;31;40m Zasady \x1b[0m";
    printf( "\033[%d;%dH", ( 24 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
    printf( "\033[%d;%dH", ( 25 ), ( 47 ) );   cout << "\x1b[1;31;40m Tworca \x1b[0m";
    printf( "\033[%d;%dH", ( 26 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
    printf( "\033[%d;%dH", ( 29 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
    printf( "\033[%d;%dH", ( 30 ), ( 47 ) );   cout << "\x1b[1;31;40m Koniec \x1b[0m";
    printf( "\033[%d;%dH", ( 31 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
    printf( "\033[%d;%dH", ( 1000 ), ( 0 ) );
}

void menu_list()
{
        system("stty raw");
        m_updown = getchar();
        system("stty cooked");

        if(m_updown == 126)
        {
            exit(0);
        }

        if (m_updown == 's' or m_updown == 'S')
        {
            menu_pos++;
        }

        if (m_updown == 'w' or m_updown == 'W')
        {
            menu_pos--;
        }

        if (menu_pos >= 4)
        {
            menu_pos = 0;
        }

        if (menu_pos <= (-1))
        {
            menu_pos = 3;
        }

        if (menu_pos == 0)
        {
        start_bg();
        printf( "\033[%d;%dH", ( 20 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 21 ), ( 47 ) );   cout << "\x1b[1;31;40m \x1b[0m" << "\x1b[1;30;101m Graj!\x1b[0m" << "\x1b[1;31;40m \x1b[0m";
        printf( "\033[%d;%dH", ( 22 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 23 ), ( 47 ) );   cout << "\x1b[1;31;40m Zasady \x1b[0m";
        printf( "\033[%d;%dH", ( 24 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 25 ), ( 47 ) );   cout << "\x1b[1;31;40m Tworca \x1b[0m";
        printf( "\033[%d;%dH", ( 26 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 29 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 30 ), ( 47 ) );   cout << "\x1b[1;31;40m Koniec \x1b[0m";
        printf( "\033[%d;%dH", ( 31 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        }

        if (menu_pos == 1)
        {
        start_bg();
        printf( "\033[%d;%dH", ( 20 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 21 ), ( 47 ) );   cout << "\x1b[1;31;40m  Graj! \x1b[0m";
        printf( "\033[%d;%dH", ( 22 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 23 ), ( 47 ) );   cout << "\x1b[1;31;40m \x1b[0m" << "\x1b[1;30;101mZasady\x1b[0m" << "\x1b[1;31;40m \x1b[0m";
        printf( "\033[%d;%dH", ( 24 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 25 ), ( 47 ) );   cout << "\x1b[1;31;40m Tworca \x1b[0m";
        printf( "\033[%d;%dH", ( 26 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 29 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 30 ), ( 47 ) );   cout << "\x1b[1;31;40m Koniec \x1b[0m";
        printf( "\033[%d;%dH", ( 31 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        }

        if (menu_pos == 2)
        {
        start_bg();
        printf( "\033[%d;%dH", ( 20 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 21 ), ( 47 ) );   cout << "\x1b[1;31;40m  Graj! \x1b[0m";
        printf( "\033[%d;%dH", ( 22 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 23 ), ( 47 ) );   cout << "\x1b[1;31;40m Zasady \x1b[0m";
        printf( "\033[%d;%dH", ( 24 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 25 ), ( 47 ) );   cout << "\x1b[1;31;40m \x1b[0m" << "\x1b[1;30;101mTworca\x1b[0m" << "\x1b[1;31;40m \x1b[0m";
        printf( "\033[%d;%dH", ( 26 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 29 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 30 ), ( 47 ) );   cout << "\x1b[1;31;40m Koniec \x1b[0m";
        printf( "\033[%d;%dH", ( 31 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        }
        if (menu_pos == 3)
        {
        start_bg();
        printf( "\033[%d;%dH", ( 20 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 21 ), ( 47 ) );   cout << "\x1b[1;31;40m  Graj! \x1b[0m";
        printf( "\033[%d;%dH", ( 22 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 23 ), ( 47 ) );   cout << "\x1b[1;31;40m Zasady \x1b[0m";
        printf( "\033[%d;%dH", ( 24 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 25 ), ( 47 ) );   cout << "\x1b[1;31;40m Tworca \x1b[0m";
        printf( "\033[%d;%dH", ( 26 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 29 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        printf( "\033[%d;%dH", ( 30 ), ( 47 ) );   cout << "\x1b[1;31;40m \x1b[0m" << "\x1b[1;30;101mKoniec\x1b[0m" << "\x1b[1;31;40m \x1b[0m";
        printf( "\033[%d;%dH", ( 31 ), ( 47 ) );   cout << "\x1b[1;31;40m        \x1b[0m";
        }
}

void loading_menu()
{
    system("clear");
    printf( "\033[%d;%dH", ( 30 ), ( 31 ) ); 
    cout << "Podpowiedz: Jesli jeszcze tego nie zrobiles, ";
    printf( "\033[%d;%dH", ( 31 ), ( 36 ) ); 
    cout << "ustaw rozmiar terminala na 100x40.";
    //loading();
    start_menu();
}

void start_menu()
{
    printf( "\033[%d;%dH", ( 1000 ), ( 0 ) );
    menu_launch();
    while(m_updown != 13)
    {
        menu_list();
        printf( "\033[%d;%dH", ( 1000 ), ( 0 ) );
    }
    
    

    if (m_updown == 13)
    {
        if (menu_pos == 0)
        {
            system("clear");
            printf( "\033[%d;%dH", ( 21 ), ( 47 ) ); cout << "                 ";
            printf( "\033[%d;%dH", ( 22 ), ( 47 ) ); cout << "                 ";
            printf( "\033[%d;%dH", ( 23 ), ( 47 ) ); cout << "                 ";
            printf( "\033[%d;%dH", ( 24 ), ( 47 ) ); cout << "                 ";
            printf( "\033[%d;%dH", ( 25 ), ( 47 ) ); cout << "                 ";
            printf( "\033[%d;%dH", ( 26 ), ( 47 ) ); cout << "                 ";
            printf( "\033[%d;%dH", ( 27 ), ( 47 ) ); cout << "                 ";
            printf( "\033[%d;%dH", ( 28 ), ( 47 ) ); cout << "                 ";
            printf( "\033[%d;%dH", ( 29 ), ( 47 ) ); cout << "                 ";

            printf( "\033[%d;%dH", ( 30 ), ( 31 ) ); 
            cout << "Podpowiedz: Poruszaj sie samochodzikiem";
            printf( "\033[%d;%dH", ( 31 ), ( 35 ) );
            cout << "korzystajac z przyciskow A i D.";
            loading();
            game();
        }
        if (menu_pos == 1)
        {
            rules();
        }
        if (menu_pos == 2)
        {
            credits();
        }
        if (menu_pos == 3)
        {
            exit(0);
        }
    }
}