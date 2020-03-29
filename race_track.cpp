#include <iostream>
#include "race_track.hpp"

race_track::race_track(): player_coords(0, 0) {
    for(int i = 0; i < ROWS; i++) {

        if(i % 2 == 0) matrix[i][0] = '+';
        else matrix[i][0] = '-';

        for(int j = 1; j < COLUMNS + 1; j++) {
            matrix[i][j] = ' ';
        }

        if(i % 2 == 0) matrix[i][COLUMNS + 1] = '+';
        else matrix[i][COLUMNS + 1] = '-';
    }

    plus = true;
}

void race_track::print_matrix() {
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLUMNS + 2; j++) {
            std::cout << matrix[i][j];
        }
        std::cout << std::endl;
    }
}

void race_track::update_object(coordinate coords, char symbol) {
    matrix[coords.get_y()][coords.get_x()] = symbol;
}

void race_track::delete_object(coordinate coords) {
    matrix[coords.get_y()][coords.get_x()] = ' ';
}

void race_track::update_player(coordinate coords, char symbol) {
    update_object(coords, symbol);
    player_coords = coords;
}

// La fila d'attesa com'è implementata?
// Come aggiornare le coordinate degli altri oggetti?
// Bisogna fare in modo che vengano modificati solo i caratteri che si sono mossi
void race_track::update_matrix() {
    for(int i = ROWS - 1; i >= 0; i--) {
        for(int j = 0; j < COLUMNS + 2; j++) {
            if (!(i == player_coords.get_y() && j == player_coords.get_x())) {
                if (i == 0) {
                    if (j == 0 || j == COLUMNS + 1) {
                        if (plus) {
                            matrix[i][j] = '-';
                        }
                        else matrix[i][j] = '+';

                        if(j == COLUMNS + 1) plus = !plus;
                    } else {
                        matrix[i][j] = ' ';
                    }
                } else if (i == player_coords.get_y() + 1 && j == player_coords.get_x()) {
                    matrix[i][j] = ' ';
                } else {
                    matrix[i][j] = matrix[i - 1][j];
                }
            }
        }
    }
};
