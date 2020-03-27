//IMPLEMENTAZIONE DEI METODI SPECIFICATI NEL FILE DI HEADER
#include "coordinate.hpp"
#include "player.hpp"
//COSTRUTTORE
player :: player(){
  score = 0;
  coords = new coordinate();
  auto = 'A';
}
//GETTER
int player :: get_x(){
  return coords.x;
}

int player :: get_y(){
  return coords.y;
}

//FUNCTION PLAYER CONTROL
void player :: move(char dir){
  if(dir == 'w'){
    coords.inc_y();
  }else if(dir == 'a'){
    coords.dec_x();
  }else if(dir == 's'){
    coords.dec_y();
  }else if(dir == 'd'){
    coords.inc_x();
  }

  //getter del punteggio
  int player :: get_score(){
    return score;
  }
  //aumento punteggio
  void player :: inc_score(int incr){
    score += incr;
  }
  //scalo punteggio


  //funzione di MORTE
  void player :: death(){
    //da implementare
  }
