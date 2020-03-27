//FILE DI HEADER DELLA CLASSE DEL GIOCATORE
#include "coordinate.hpp"

class player: public coordinate{
  protected:
    int score;
    char auto;
    coordinate coords;
  public:
    //COSTRUTTORE GIOCATORE
    player();
    //ritorna coordinate x e y
    int get_x();
    int get_y();
    //sposta in una direzione di input
    void move(char dir);
    //ritorna il punteggio
    int get_score();
    //funzione di aumento punteggio
    void inc_score(int incr);
    //funzione per decrementare punteggio
    void dec_score(int malus);

    //FUNZIONE MORTE GIOCATORE
    void death();


};
