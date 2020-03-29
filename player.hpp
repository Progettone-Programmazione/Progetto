//FILE DI HEADER DELLA CLASSE DEL GIOCATORE
#include "object.hpp"
#include "coordinate.hpp"

class player: public object {
  protected:
    int score;
    coordinate coords;
  public:
    //COSTRUTTORE GIOCATORE
    player(race_track *track);

    //sposta in una direzione di input
    void move(char key);

    //ritorna il punteggio
    int get_score();

    //funzione di aumento punteggio
    void inc_score(int incr);

    //funzione per decrementare punteggio
    void dec_score(int malus);

    //FUNZIONE MORTE GIOCATORE
    void death();

};
