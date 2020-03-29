//IMPLEMENTAZIONE DEI METODI SPECIFICATI NEL FILE DI HEADER
#include "player.hpp"

//COSTRUTTORE
player::player(race_track *track) : object('@', coordinate(COLUMNS / 2, ROWS / 2), track) {
    track->update_player(coords, symbol);
}

//GETTER E SETTER DELLE COORDINATE
int player :: get_x(){
  return coords.x;
}

int player :: get_y(){
  return coords.y;
}

//FUNCTION PLAYER CONTROL
void player :: move(char key){
  if(key == 'd') {
      track->delete_object(coords);
      coords.inc_x();
      track->update_player(coords, symbol);
  }
  else if(key == 'a') {
      track->delete_object(coords);
      coords.dec_x();
      track->update_player(coords, symbol);
  }
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
  void player :: dec_score(int malus){
    score -= malus;
    if(score < 0) death();
  }

  //funzione di MORTE
  void player :: death(){

  }
