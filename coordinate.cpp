//IMPLEMENTAZIONE METODI oggetto
#include "coordinate.hpp"

coordinate :: coordinate(int x, int y){
  this -> x = x;
  this -> y = y;
}

void coordinate :: inc_x(){
  x += 1;
}
void coordinate :: inc_y(){
  y += 1;
}
void coordinate :: dec_x(){
  if(x > 1) x -= 1;
}
void coordinate :: dec_y(){
  if(y > 1) y -= 1;
}
