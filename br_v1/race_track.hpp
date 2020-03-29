// HEADER FILE - race_track.hpp

#include "coordinates.hpp"

#define ROWS 10
#define COLUMNS 10

class race_track {
protected:
    char matrix[ROWS][COLUMNS+2];
    coordinates player_coords;
    bool plus;

public:
    // Constructor
    race_track();

    // Methods
    void print_matrix();

    // Problemi:
    // - riconoscere il giocatore principale e non muoverlo
    // - implementare una sorta di fila d'attesa per la riga più in alto (con i nuovi oggetti che devono arrivare)
    // - le altre macchine possono arrivare sia dall'alto che dal basso (velocità positiva e negativa rispettivamente)
    void update_matrix();

    // Come migliorare:
    // - trovare un modo per passare l'oggetto al posto delle coordinate e del simbolo
    //   in questo modo, ad esempio, si può verificare che l'oggetto sia un player e aggiornare le player_coords
    void update_object(coordinates coords, char symbol);
    void delete_object(coordinates coords);
    void update_player(coordinates coords, char symbol);
};