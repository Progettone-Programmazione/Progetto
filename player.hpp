//FILE DI HEADER DELLA CLASSE DEL GIOCATORE
#include "coordinate.hpp"

class player: public oggetto{
  protected:
    int score;
    char auto;
    coordinate coords;
  public:
    //ritorna coordinate x e y
    int get_x();
    int get_y();
    //sposta in una direzione di input
    void move(char dir);

}
