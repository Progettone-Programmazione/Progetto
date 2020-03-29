#include <iostream>
#include <conio.h>
#include "player.hpp"

using namespace std;

int main() {
    race_track mat = race_track();
    player pl = player(&mat);
    mat.print_matrix();
    char ch = '\0';
    do {
        cin >> ch;
        /*if(_kbhit()) {
            ch = getch();*/
            pl.move(ch);
        //}
        mat.update_matrix();
        system("cls");
        _sleep(1000);
        mat.print_matrix();
    } while(ch != 'q');
}
