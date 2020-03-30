// HEADER FILE - race_track.hpp

#include "coordinate.hpp"

#define ROWS 10
#define COLUMNS 10

#define LENGTH 10

class race_track {
protected:
    char matrix[ROWS][COLUMNS+2];
    // coordinate player_coords;
    obstacle interazione[LENGTH];
    car macchine[LENGTH];
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
    void update_object(coordinate coords, char symbol);
    void delete_object(coordinate coords);
    void update_player(coordinate coords, char symbol);
};
