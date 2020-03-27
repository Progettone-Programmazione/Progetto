//IMPLEMENTAZIONE DEI METODI SPECIFICATI NEL FILE DI HEADER
#include "coordinate.hpp"
#include "player.hpp"

int player :: get_x(){
  return player.coords.x;
}

int player :: get_y(){
  return player.coords.y;
}

void player :: move(char dir){
  if(dir == 'w'){
    player.coords.y += 1;
  }else if(dir == 'a'){
    player.coords.x -= 1;
  }else if(dir == 's'){
    player.coords.y -= 1;
  }else if(dir == 'd'){
    player.coords.x += 1;
  }

  
}
