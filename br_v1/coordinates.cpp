#include "coordinates.hpp"

coordinates::coordinates(int x, int y) {
    this -> x = x;
    this -> y = y;
}

int coordinates::get_x() {
    return x;
}

int coordinates::get_y() {
    return y;
}

void coordinates::inc_x() {
    x++;
}

void coordinates::inc_y() {
    y++;
}

void coordinates::dec_x() {
    x--;
}

void coordinates::dec_y() {
    y--;
}
